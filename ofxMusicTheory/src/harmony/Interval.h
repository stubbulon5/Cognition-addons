/*
 *  Interval.h
 *  MusicTheory
 *
 *  Created by Andreas Borg on 29/01/2013
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 
 */

#ifndef _Interval
#define _Interval

#include "ofMain.h"
#include "Note.h"
#include "Diatonic.h"
#include "Poco/RegularExpression.h"
using Poco::RegularExpression;

//class Note;
namespace MusicTheory{
    
    typedef NotePtr (*IntervalFunctionPointer)(NotePtr);
    typedef map<string,IntervalFunctionPointer> IntervalFuncLookup;
 
    static vector<string>romanNumerals = {
            "I",
            "bII",
            "II",
            "bIII",
            "III",
            "IV",
            "bV",
            "V",
            "bVI",
            "VI",
            "bVII",
            "VII"
        };
    
class Interval {

  public:

    
/*
 Diatonic Interval.
 Needs a note and a key.
 
 Take the diatonic second of note in key.
 Examples:
 {{{
 >>>	second("E", "C")
 'F'
 >>> second("E", "D")
 'F#'
 }}}*/
    
    
    static NotePtr unison(NotePtr note, NotePtr key){
        return note;
    }
    
    static NotePtr second(NotePtr note, NotePtr key){
        return Diatonic::interval(key, note, 1);
    }
    
    static NotePtr third(NotePtr note, NotePtr key){
        return Diatonic::interval(key, note, 2);
    }
    static NotePtr fourth(NotePtr note, NotePtr key){
        return Diatonic::interval(key, note, 3);
    }
    static NotePtr fifth(NotePtr note, NotePtr key){
        return Diatonic::interval(key, note, 4);
    }
    static NotePtr sixth(NotePtr note, NotePtr key){
        return Diatonic::interval(key, note, 5);
    }
    static NotePtr seventh(NotePtr note, NotePtr key){
        return Diatonic::interval(key, note, 6);
    }
   
    
    /*
     Absolute Interval
     Needs a note
     */
    
    static NotePtr minorUnison(NotePtr note){
        NotePtr n = note->copy();
        n->diminish();
        return n;
    }
    
    static NotePtr majorUnison(NotePtr note){
        return note->copy();
    }
    
    static NotePtr augmentedUnison(NotePtr note){
        NotePtr n = note->copy();
        n->augment();
        return n;
    }
    
    
    static NotePtr minorSecond(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(1);
        return n;
        
        /*
        NotePtr sec = Interval::second(note.getNatural(), NotePtr("C"));
        return Interval::findInterval(note, sec, 1);
         */
    }
    
    static NotePtr majorSecond(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(2);
        return n;
        
        /*
        NotePtr sec = Interval::second(note.getNatural(), NotePtr("C"));
        return Interval::findInterval(note, sec, 2);
         */
    }
    
    static NotePtr minorThird(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(3);
        return n;
        /*
         NotePtr trd = Interval::third(note.getNatural(), NotePtr("C"));
        return Interval::findInterval(note, trd, 3);
         */
    }
    
    static NotePtr majorThird(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(4);
        return n;
        /*
       NotePtr trd = Interval::third(note.getNatural(), NotePtr("C"));
        return Interval::findInterval(note, trd, 4);
         */
    }
    
    static NotePtr minorFourth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(4);
        return n;
        
        
        /*
        NotePtr frt = Interval::fourth(note.getNatural(), NotePtr("C"));
        return Interval::findInterval(note, frt, 4);
         */
    }
    
    static NotePtr majorFourth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(5);
        return n;
        
        /*
        NotePtr frt = Interval::fourth(note.getNatural(), NotePtr("C"));
        return Interval::findInterval(note, frt, 5);
         */
    }
    
    static NotePtr perfectFourth(NotePtr note){
        return Interval::majorFourth( note);
    }
    
    static NotePtr augmentedFourth(NotePtr note){
       return Interval::minorFifth( note);
    }
    
    static NotePtr minorFifth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(6);
        return n;
    }
    

    
    static NotePtr perfectFifth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(7);
        return n;
    }
    
    static NotePtr augmentedFifth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(8);
        return n;
    }
    
    
    static NotePtr majorFifth(NotePtr note){
        return Interval::augmentedFifth( note);
    }
    
    static NotePtr minorSixth(NotePtr note){
       return Interval::augmentedFifth( note);
    }
    
    static NotePtr majorSixth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(9);
        return n;
    }
    
    static NotePtr minorSeventh(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(10);
        return n;
    }
    
    static NotePtr majorSeventh(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(11);
        return n;
    }
    
    static NotePtr octave(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(12);
        return n;
    }

    static NotePtr minorNinth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(13);
        return n;
    }
    
    static NotePtr majorNinth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(14);
        return n;
    }
    
    static NotePtr minorTenth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(15);
        return n;
    }
    
    static NotePtr majorTenth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(16);
        return n;
    }
    
    static NotePtr perfectEleventh(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(17);
        return n;
    }
    
    static NotePtr augmentedEleventh(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(18);
        return n;
    }
    
    static NotePtr perfectTwelvth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(19);
        return n;
    }
    
    static NotePtr augmentedTwelvth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(20);
        return n;
    }
    
    static NotePtr minorThirteenth(NotePtr note){
       return Interval::augmentedTwelvth( note);
    }
    
    static NotePtr majorThirteenth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(21);
        return n;
    }
    
    static NotePtr minorFourteenth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(22);
        return n;
    }
    
    static NotePtr majorFourteenth(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(23);
        return n;
    }
    
    static NotePtr doubleOctave(NotePtr note){
        NotePtr n = note->copy();
        n->transpose(24);
        return n;
    }
    
    
    //(Helper) Functions
    
    
    /*
     Gets the note an interval (in half notes) away from the given note. \
     This will produce mostly theoretical sound results, but you should \
     use the minor and major functions to work around the corner cases.
     */
    
   // static NotePtr getInterval(NotePtr note, int interval,string key = "C"){
	
    /*
        Interval = map(lambda x: (NotePtrs::note_to_int(key) + x) % 12,[0, 2, 4, 5, 7, 9, 11]);
        key_notes = diatonic.get_notes(key);
    
	for x in key_notes){
    if x[0] == note[0]){
    result = (Interval[key_NotePtrs::index(x)] + interval) % 12
    
	if result in Interval){
    return key_notes[Interval.index(result)] + note[1:]
	else){
    return NotePtrs::diminish(key_notes[Interval.index((result + 1) % 12)] + note[1:])*/
   // }
    

    /*
     Returns an integer in the range of 0-11, determining the half note 
    steps between note1 and note2.
     */
    
    static int measure(const NotePtr note1, const NotePtr note2, bool acceptNegative = false){

        int res = note2->toInt(true) - note1->toInt(true);
        if(res < 0 && !acceptNegative){
            return 12 - (res * (-1));
        }else{
            return res;
        }
        
    }
    
    
    /*
     Names the interval between note1 and note2.
     Example:
     {{{
     >>>	determine("C", "E")
     'major third'
     >>> determine("C", "Eb")
     'minor third'
     >>> determine("C", "E#")
     'augmented third'
     >>> determine("C", "Ebb")
     'diminished third'
     
     
     
     This works for all Interval. NotePtr that there are corner cases \
     for 'major' fifths and fourths:
     {{{
     >>> determine("C", "G")
     'perfect fifth'
     >>> determine("C", "F")
     'perfect fourth'
    
    
     */
    static string determine(NotePtr note1, NotePtr note2, bool shorthand = false){
	
    
        //Corner case for unisons ('A' and 'Ab', for instance)
        if(note1->getUnaltered() == note2->getUnaltered()){
            //get num of accidentals
            int augs = ofStringTimesInString(note1->name, "#");
            int dims = ofStringTimesInString(note1->name, "b");
            int x = augs-dims;
            
            augs = ofStringTimesInString(note2->name, "#");
            dims = ofStringTimesInString(note2->name, "b");
            int y = augs-dims;
        
            if (x == y){
                if(!shorthand){
                    return "major unison";
                }else{
                    return "1";
                }
            }else if(x < y){
                if(!shorthand){
                    return "augmented unison";
                }else{
                    return "#1";
                }
            }else if((x - y) == 1){
                if(!shorthand){
                    return "minor unison";
                }else{
                    return "b1";
                }
                
            }else{
                 if(!shorthand){
                     return "diminished unison";
                }else{
                    return "bb1";
                }
            }
           
        }
        //Other Interval
            
        vector<string> nNames = ofSplitString(fifths,",");
        vector<string>::iterator it = find(nNames.begin(),nNames.end(),note1->getUnaltered());
        
        if(it == nNames.end()){
            cout<<"Cannot find "<<note1->getUnaltered()<<" in fifths"<<endl;
            return "";
        }
        int n1 = it-nNames.begin();
        
        
            
        it = find(nNames.begin(),nNames.end(),note2->getUnaltered());
        if(it == nNames.end()){
            cout<<"Cannot find "<<note2->getUnaltered()<<" in fifths"<<endl;
            return "";
        }
        int n2 = it-nNames.begin();
        
        
        int number_of_fifth_steps = n2 - n1;
        
        if(n2 < n1){
            number_of_fifth_steps = nNames.size() - n1 + n2;
        }
        // [name, shorthand_name, half notes for major version of this interval]
        

        static vector< vector<string> > fifth_steps{
        {"unison","1","0"},
        {"fifth","5","7"},
        {"second","2","2"},
        {"sixth","6","9"},
        {"third","3","4"},
        {"seventh","7","11"},
        {"fourth","4","5"}
        };
       
        
        
            //Count half steps between note1 and note2
       int half_notes = Interval::measure(note1, note2);
            //Get the proper list from the number of fifth steps
        
        //maj = number of major steps for this interval
       int maj = ofToInt(fifth_steps[number_of_fifth_steps][2]);
    
        //if maj is equal to the half steps between note1 and note2
        //the interval is major or perfect
        if(maj == half_notes){
    
            //Corner cases for perfect fifths and fourths
            if(fifth_steps[number_of_fifth_steps][0] == "fifth"){
                if(!shorthand){
                    return "perfect fifth";
                }
            }else if (fifth_steps[number_of_fifth_steps][0] == "fourth"){
                if(!shorthand){
                    return "perfect fourth";
                }
            }
            if(!shorthand){
                return "major " + fifth_steps[number_of_fifth_steps][0];
            }else{
                return fifth_steps[number_of_fifth_steps][1];
            }
        //if maj + 1 is equal to half_notes, the interval is augmented.
        }else if(maj + 1 <= half_notes){
            if(!shorthand){
                return "augmented " + fifth_steps[number_of_fifth_steps][0];
            }else{
                string str;
                for(int i=0;i<(half_notes - maj) ;i++){
                    str+="#";
                }
                return str + fifth_steps[number_of_fifth_steps][1];
            }
                //etc.
        }else if( maj - 1 == half_notes){
            if(!shorthand){
                return "minor " + fifth_steps[number_of_fifth_steps][0];
            }else{
                return "b" + fifth_steps[number_of_fifth_steps][1];
            }
        }else if( maj - 2 >= half_notes){
            if(!shorthand){
                return "diminished " + fifth_steps[number_of_fifth_steps][0];
            }else{
                string str;
                for(int i=0;i<(maj - half_notes);i++){
                    str+="b";
                }
                return str + fifth_steps[number_of_fifth_steps][1];
            }
        }

    return "unknown";
            
    }
    
    
    
    
    /*
    Returns the note on a named interval up or down.
    Named intervals are
    1 unison
    b2 minor second etc. up to 13.
    Each can be altered, eg. b3 or #11 and negative -3
     */
    
    static NotePtr fromName(NotePtr note, string interval){
        bool neg = (bool) (interval.substr(0,1)=="-");
        NotePtr n = (*IntervalFunctionLookup()[interval])(note);
        
        ofStringReplace(interval,"-","");
        ofStringReplace(interval,"b","");
        ofStringReplace(interval,"#","");
        
        int diff = ofToInt(interval);
        int octDiff = floor(diff/8);
        
        
        
        if(neg){
            n->changeOctave(-octDiff-1);
        }else{
            if(diff == 15){
                octDiff = 2;//15 should round up to 2 oct
            }
            n->changeOctave(octDiff);
        }
        return n;
    }
    
    /*
    https://en.wikipedia.org/wiki/Roman_numeral_analysis
    
    Upper lower case for minor / major? Is it bVI or #V? 
    Let's keep it simple and consistent.
    */
    
    static string toRoman(int interval){
     int diff = 0;
        if(interval<0){
            interval = (-interval)%12;
            diff = 12-interval;
        }else{
            diff = interval%12;
        }
        return romanNumerals[diff];
    }
    
    static string getRoman(int interval){
        return Interval::toRoman(interval);
    }
    
    
    
    static int fromRoman(string v){
        ofStringReplace(v, " ", "");
        
        RegularExpression::Match match;
        
        RegularExpression accEx("[#b]*(?=[iIvV])");//find accidentals
        string acc="";
        if(accEx.match(v, match) != 0) {
            acc = v.substr(0,match.length);
        }
        
        
        int augs = ofStringTimesInString(acc, "#");
        int dims = ofStringTimesInString(acc, "b");

        int accidentals = augs-dims;
        string roman = v.substr((augs+dims));//remove accidentals
      
        RegularExpression romanEx("(?<!d)[iIvV]*");//find all romans not prefixed by d, thus exclude i in dim..
        
        if(romanEx.match(roman, match) != 0) {
            roman = roman.substr(match.offset,match.length);
        }
        
        roman = ofToUpper(roman);
        
        for(int i=0;i<romanNumerals.size();i++){
            if(romanNumerals[i] == roman){
                return i+accidentals;
            }
        }
        ofLogError()<<"Roman "<<v<<" not found"<<endl;
        return 0;
    }
private:
    
    /*
     A helper function for the minor and major functions. \
     You should probably not use this directly.*/
    
    static NotePtr findInterval(NotePtr note1, NotePtr note2, int interval){
        int cur = measure(note1, note2);
       
       //optimize pleeeeaze
        //eg note2.diminish(interval);
        while(cur != interval){
            if (cur > interval){
                note2->diminish();
            }else if (cur < interval){
                note2->augment();
            }
            cur = measure(note1, note2);
        }
       
        // We are practically done right now, but we need to be able to create
        // the minor seventh of Cb and get Bbb instead of B######### as the result
      
        int augs = ofStringTimesInString(note2->name, "#");
        int dims = ofStringTimesInString(note2->name, "b");
        
        int val = augs-dims;
        
        
        // These are some checks to see if we have generated too many #'s
        // or too many b's. In these cases we need to convert #'s to b's
        // and vice versa.
        if(val > 6){
            val = val % 12;
            val = -12 + val;
        }else if(val < -6){
            val = val % -12;
            val = 12 + val;
        }
        
        // Rebuild the note
        NotePtr result = note2->getNatural();//...need to figure out what's goin on here
        result->octave = note1->octave;
        
        if(val > 0){
            result->augment(val);
        }
        
        if(val < 0){
            result->diminish(val);
        }
        
        
        return result;
    }
    
    /*
    Names from Mark Levine - Jazz Theory
    This returns note in same octave. Transpose octave outside.
    Use with fromName.
    */
    
    static IntervalFuncLookup IntervalFunctionLookup(){
        static const IntervalFuncLookup _intervalFunctionLookup = {
            
            {"-15",&Interval::majorUnison},
            
            {"-14",&Interval::minorSecond},
            {"-b14",&Interval::majorSecond},
            {"-13",&Interval::minorThird},
            {"-b13",&Interval::majorThird},
            {"-#12",&Interval::majorThird},
            {"-12",&Interval::perfectFourth},
            {"-b12",&Interval::augmentedFourth},
            {"-#11",&Interval::augmentedFourth},
            {"-11",&Interval::perfectFifth},
            {"-10",&Interval::minorSixth},
            {"-b10",&Interval::majorSixth},
            {"-#9",&Interval::majorSixth},
            {"-9",&Interval::minorSeventh},
            {"-b9",&Interval::majorSeventh},
            
            {"-8",&Interval::majorUnison},
            
            {"-7",&Interval::minorSecond},
            {"-b7",&Interval::majorSecond},
            {"-6",&Interval::minorThird},
            {"-b6",&Interval::majorThird},
            {"-#5",&Interval::majorThird},
            {"-5",&Interval::perfectFourth},
            {"-b5",&Interval::augmentedFourth},
            {"-#4",&Interval::augmentedFourth},
            {"-4",&Interval::perfectFifth},
            {"-b4",&Interval::minorSixth},
            {"-#3",&Interval::perfectFifth},
            {"-3",&Interval::minorSixth},
            {"-b3",&Interval::majorSixth},
            {"-#2",&Interval::majorSixth},
            {"-2",&Interval::minorSeventh},
            {"-b2",&Interval::majorSeventh},
            {"-1",&Interval::majorUnison},
            
            {"1",&Interval::majorUnison},
            {"b2",&Interval::minorSecond},
            {"2",&Interval::majorSecond},
            {"#2",&Interval::minorThird},
            {"b3",&Interval::minorThird},
            {"3",&Interval::majorThird},
            {"#3",&Interval::perfectFourth},
            {"b4",&Interval::majorThird},
            {"4",&Interval::perfectFourth},
            {"#4",&Interval::augmentedFourth},
            {"b5",&Interval::augmentedFourth},
            {"5",&Interval::perfectFifth},
            {"#5",&Interval::minorSixth},
            {"b6",&Interval::minorSixth},
            {"6",&Interval::majorSixth},
            {"b7",&Interval::minorSeventh},
            {"7",&Interval::majorSeventh},
            
            {"8",&Interval::majorUnison},
            
            {"b9",&Interval::minorSecond},
            {"9",&Interval::majorSecond},
            {"#9",&Interval::minorThird},
            {"b10",&Interval::minorThird},
            {"10",&Interval::majorThird},
            {"11",&Interval::perfectFourth},
            {"#11",&Interval::augmentedFourth},
            {"b12",&Interval::augmentedFourth},
            {"12",&Interval::perfectFifth},
            {"#12",&Interval::minorSixth},
            {"b13",&Interval::minorSixth},
            {"13",&Interval::majorSixth},
            {"b14",&Interval::minorSeventh},
            {"14",&Interval::majorSeventh},
            
            {"15",&Interval::majorUnison},
            
        };
    
        return _intervalFunctionLookup;
    }
    
    
};//class
    
typedef shared_ptr<Interval> IntervalPtr;
    
    
}//namespace

#endif
