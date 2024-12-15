#ifndef SCALEDATA_H
#define SCALEDATA_H

namespace MusicTheory{
// Returns a vector of Tab Separated Values:           Scale Id|Scale Name|Origin|Notes|NumNotes
static vector<string> getScaleDictionary() { return ofSplitString(R"(
ionian|Ionian|Common|C,D,E,F,G,A,B|7
dorian|Dorian|Common|C,D,Eb,F,G,A,Bb|7
phrygian|Phrygian|Common|C,Db,Eb,F,G,Ab,Bb|7
lydian|Lydian|Common|C,D,E,F#,G,A,B|7
mixolydian|Mixolydian|Common|C,D,E,F,G,A,Bb|7
aeolian|Aeolian|Common|C,D,Eb,F,G,Ab,Bb|7
locrian|Locrian|Common|C,Db,Eb,F,Gb,Ab,Bb|7
halfDiminished|Half Diminished|Common|C,D,Eb,F,Gb,Ab,Bb|7
pentatonicMinor|Minor Pentatonic |Common|C,Eb,F,G,Bb|5
pentatonicMajor Major|Pentatonic|Common|C,D,E,G,A|5
pentatonicDominant|Pentatonic Dominant|Common|C,D,E,G,A#|5
melodicMinor|Melodic Minor|Common|C,D,Eb,F,G,A,B|7
melodicMinorII|Melodic Minor II|Common|B#,C#,D#,E#,F##,G##,A#|7
melodicMinorIII|Melodic MinorIII|Common|C,D,E,F#,G#,A,B|7
augmented|Augmented|Common|C,D#,E,G,Ab,B|6
melodicMinorII|Melodic Minor II|Common|B#,C#,D#,E#,F##,G##,A#|7
melodicMinorIII|Melodic Minor III|Common|C,D,E,F#,G#,A,B|7
melodicMinorIV|Melodic Minor IV|Common|C,D,E,F#,G,A,Bb|7
melodicMinorV|Melodic Minor V|Common|C,D,E,F,G,Ab,Bb|7
melodicMinorVI|Melodic Minor VI|Common|B#,C##,D#,E#,F#,G#,A#|7
melodicMinorVII|Melodic Minor VII|Common|B#,C#,D#,E,F#,G#,A#|7
naturalMinor|Natural Minor|Common|C,D,Eb,F,G,Ab,Bb|7
harmonicMinor|Harmonic Minor|Common|C,D,Eb,F,G,Ab,B|7
flamenco|Flamenco|Common|C,C#,D#,E,F,G,G#,A#|8
bebopDominant|Bebop Dominant|Common|C,D,E,F,G,A,Bb,B|8
bebopMinor|Bebop Minor|Common|C,D,Eb,E,F,G,A,Bb|8
blues|Blues|Common|C,Eb,F,Gb,G,Bb|6
lydianDiminished|LydianDiminished|Common|C,D,Eb,F#,G,A,B|7
lydianDominant|Lydian Dominant|Common|C,D,E,F#,G,A,Bb|7
inSen|Insen Scale|Common;Japanese|C,Db,F,G,Ab,Bb|6
hirajoshi|Hira-joshi Scale|Common;Japanese|C,D,Eb,G,Ab|5
hindu|Hindu Scale|Common;Indian|C,D,E,F,G,Ab,Bb|7
chromatic|Chromatic|Common|C,C#,D,D#,E,F,F#,G,G#,A,A#,B|12
wholenote|Wholenote|Common|C,D,E,F#,G#,A#|6
#------------------------------------------------------------------------------
acousticScale|Acoustic Scale||C,D,E,F#,G,A,Bb|7
adonaiMalakhScale|Adonai Malakh Scale|Jewish|C,Db,D,Eb,F,G,A,Bb|8
aeolianScale|Aeolian Scale|Greek|C,D,Eb,F,G,Ab,Bb|7
aeolianHarmonicScale|Aeolian Harmonic Scale|Greek|C,D#,E,F#,G,A,B|7
aeolianMajorScale|Aeolian Major Scale|Greek|C,D,E,F,G,Ab,Bb|7
aeolianPentatonicScale|Aeolian Pentatonic Scale|Greek|C,Eb,F,G,Bb|5
aeolianb1Scale|Aeolian b1 Scale|Greek|C,D#,E,F#,G#,A,B|7
ahavaRabbaScale|Ahava Rabba Scale|Jewish|C,Db,D#,E,F,Gb,Ab,Bb|8
akebonoIScale|Akebono I Scale|Japanese|C,D,Eb,G,A|5
akebonoIIScale|Akebono II Scale|Japanese|C,Db,F,G,Ab|5
algerianScale|Algerian Scale|Arabian|C,D,Eb,F,F#,G,Ab,B|8
alhijazScale|Alhijaz Scale|Saudi Arabian|C,Db,E,F,G,Ab,Bb|7
alteredDiminishedScale|Altered Diminished Scale||C,Db,Eb,Fb,Gb,Ab,Bbb|7
alteredDominantScale|Altered Dominant Scale||C,Db,Eb,Fb,Gb,Ab,Bb|7
alteredLydianScale|Altered Lydian Scale||C,D,E,F#,G#,A,B|7
alteredMixolydianIScale|Altered Mixolydian I Scale||C,D,E,F,G,G#,A,B|8
alteredMixolydianIIScale|Altered Mixolydian II Scale||C,D,E,F,G,Ab,A,B|8
alteredPentatonicScale|Altered Pentatonic Scale||C,Db,F,G,A|5
alteredIScale|Altered I Scale||C,Db,Eb,Fb,Gb,Ab,Bb|7
alteredIIScale|Altered II Scale||C,C#,D#,E,F#,G#,A#|7
ambasselScale|Ambassel Scale|Ethiopian|C,Db,F,G,Ab|5
ancientChineseScale|Ancient Chinese Scale|Chinese|C,D,E,F#,G,A|6
anhemitonicHexatonicScale|Anhemitonic Hexatonic Scale||C,D,E,F#,G#,A#|6
arabicScale|Arabic Scale|Arabian|C,Db,E,F,G,Ab,Bb|7
araraiScale|Ararai Scale|Ethiopian|C,D,E,F,G,A,B|7
arezzoMajorDiatonicHexachordScale|Arezzo Major Diatonic Hexachord Scale|Italian|C,D,E,F,G,A|6
asawariThaatScale|Asawari Thaat Scale|Indian|C,D,Eb,F,G,Ab,Bb|7
augmentedHexatonicScale|Augmented Hexatonic Scale||C,D#,E,G,Ab,B|6
auxiliaryDiminishedScale|Auxiliary Diminished Scale||C,D,Eb,F,Gb,Ab,A,B|8
bacoviaScale|Bacovia Scale|Romanian|C,E,F,Ab,B|5
balinesePelogScale|Balinese Pelog Scale|Balinese|C,Db,Eb,G,Ab|5
banshikichoScale|Banshikicho Scale|Japanese|C,D,Eb,Fb,G,A,Bb|7
bartokScale|Bartok Scale|Hungarian|C,D,E,F#,G,A,Bb|7
batiScale|Bati Scale|Ethiopian|C,Eb,F,G|4
bebopDominantScale|Bebop Dominant Scale|American|C,D,E,F,G,A,Bb,B|8
bebopHalf-DiminishedScale|Bebop Half-Diminished Scale|American|C,Db,Eb,F,Gb,G,Ab,B|8
bebopMajorIScale|Bebop Major I Scale|American|C,D,E,F,G,G#,A,B|8
bebopMajorIIScale|Bebop Major II Scale|American|C,D,E,F,G,Ab,A,B|8
bebopMinorScale|Bebop Minor Scale|American|C,D,Eb,E,F,G,A,Bb|8
bhairaviThaatScale|Bhairavi Thaat Scale|North Indian|C,Db,Eb,F,G,Ab,Bb|7
bhairavThaatScale|Bhairav Thaat Scale|North Indian|C,Db,E,F,G,Ab,B|7
bhairubaharThaatScale|Bhairubahar Thaat Scale|North Indian|C,Db,E,F,G,A,B|7
bilawalThaatScale|Bilawal Thaat Scale|North Indian|C,D,Eb,F,G,A,B|7
biYuScale|Bi Yu Scale|Chinese|C,Eb,G,Bb|4
blackKeyPentatonicScale|Black Key Pentatonic Scale||C,D,F,G,A|5
bluesNine-NoteScale|Blues Nine-Note Scale|African|C,D,Eb,E,F,Gb,G,A,Bb|9
bluesEnneatonicScale|Blues Enneatonic Scale|African|C,D,Eb,E,F,Gb,G,A,Bb|9
bluesHeptatonicScale|Blues Heptatonic Scale|African|C,Eb,E,F,Gb,G,Bb|7
bluesHexatonicScale|Blues Hexatonic Scale|African|C,Eb,F,Gb,G,Bb|6
bluesPentatonicScale|Blues Pentatonic Scale|African|C,Eb,F,Gb,Bb|5
bluesIScale|Blues I Scale|African|C,Eb,F,Gb,Bb|5
bluesMajorascendingScale|Blues Major ascending Scale|African|C,D,D#,E,G,A|6
bluesMajordescendingScale|Blues Major descending Scale|African|C,A,G,E,Eb,D|6
bluesMinorascendingScale|Blues Minor ascending Scale|African|C,Eb,F,Gb,G,Bb|6
bluesMinordescendingScale|Blues Minor descending Scale|African|C,Bb,G,Gb,F,Eb|6
bluesNonatonicScale|Blues Nonatonic Scale|African|C,D,Eb,E,F,Gb,G,A,Bb|9
bluesIIIScale|Blues III Scale|African|C,D,Eb,E,F,Gb,G,A,Bb|9
bluesIVScale|Blues IV Scale|African|C,D,Eb,F,Gb,G,A,Bb|8
bluesVScale|Blues V Scale|African|C,Eb,E,F,Gb,G,Bb,B|8
bluesVIScale|Blues VI Scale|African|C,Eb,E,F,Gb,G,A,Bb,B|9
bluesyRandRScale|Bluesy R and R Scale|African|C,Eb,E,F,G,A,Bb|7
byzantineLiturgicalChromaticScale|Byzantine Liturgical Chromatic Scale|Byzantine|C,Db,E,F,G,Ab,B|7
byzantineScale|Byzantine Scale|Byzantine|C,Db,E,F,G,Ab,B|7
chadGadyoScale|Chad Gadyo Scale|Jewish|C,D,Eb,F,G|5
chiaoScale|Chiao Scale|Chinese|C,D,Eb,F,G,Ab,Bb|7
chaioTwoScale|Chaio Two Scale|Chinese|C,D,F,Ab,Bb|5
chinScale|Chin Scale|Chinese|C,Eb,Gb,Ab,Bb|5
chineseScale|Chinese Scale|Chinese|C,E,F#,G,B|5
chingScale|Ching Scale|Chinese|C,E,F#,G,B|5
chromatic-harmonic-ascendingScale|Chromatic (harmonic) ascending Scale||C,Db,D,Eb,E,F,F#,G,Ab,A,Bb,C|11
chromatic-harmonic-descendingScale|Chromatic (harmonic) descending Scale||C,B,Bb,A,Ab,G,F#,F,E,Eb,D,Db|12
chromatic-melodic-ascendingScale|Chromatic (melodic) ascending Scale||C,C#,D,D#,E,F,F#,G,G#,A,F#,C|10
chromatic-melodic-descendingScale|Chromatic (melodic) descending Scale||C,B,Bb,A,Ab,G,Gb,F,E,Eb,D,Db|12
chromaticandDiatonicDorianmixedScale|Chromatic and Diatonic Dorian mixed Scale||C,Db,D,Eb,F,G,Ab,A,Bb|9
chromaticandPermutedDiatonicDorianmixedScale|Chromatic and Permuted Diatonic Dorian mixed Scale||C,Db,D,E,F,G,Ab,A,B|9
chromaticDorianScale|Chromatic Dorian Scale||C,Db,D,F,G,Ab,A|7
chromaticHypodorianScale|Chromatic Hypodorian Scale||C,D,Eb,E,G,Ab,A|7
chromaticHypodorianInverseScale|Chromatic Hypodorian Inverse Scale||C,Eb,E,F,Ab,A,Bb|7
chromaticHypolydianScale|Chromatic Hypolydian Scale||C,Db,E,Gb,G,Ab,B|7
chromaticHypolydianInverseScale|Chromatic Hypolydian Inverse Scale||C,Db,E,F,Gb,Ab,B|7
chromaticHypophrygianScale|Chromatic Hypophrygian Scale||C,Eb,F,Gb,G,Bb,B|7
chromaticHypophrygianInverseScale|Chromatic Hypophrygian Inverse Scale||C,Db,D,F,Gb,G,A|7
chromaticLydianScale|Chromatic Lydian Scale||C,Db,E,F,Gb,A,B|7
chromaticLydianInverseScale|Chromatic Lydian Inverse Scale||C,Db,Eb,Gb,G,Ab,B|7
chromaticMixolydianScale|Chromatic Mixolydian Scale||C,Db,D,F,Gb,G,Bb|7
chromaticMixolydianInverseScale|Chromatic Mixolydian Inverse Scale||C,D,F,Gb,G,Bb,B|7
chromaticPhrygianScale|Chromatic Phrygian Scale||C,Eb,E,F,Ab,Bb,B|7
chromaticPhrygianInverseScale|Chromatic Phrygian Inverse Scale||C,Db,D,E,G,Ab,A|7
cushakScale|Cushak Scale|Armenian|C,D,Eb,F,G,Ab,Bb|7
dastgahMahurScale|Dastgah Mahur Scale|Iranian|C,D,E,F,G,A,B|7
dastgahRastPanjgahScale|Dastgah Rast Panjgah Scale|Iranian|C,D,E,F,G,A,B|7
deuterusauthenticusScale|Deuterus authenticus Scale||C,Db,Eb,F,G,Ab,Bb|7
deuterusplagisScale|Deuterus plagis Scale||C,Db,Eb,F,Gb,Ab,Bb|7
diatonicmajorScale|Diatonic major Scale||C,D,E,F,G,A,B|7
diatonicminorScale|Diatonic minor Scale||C,D,Eb,F,G,Ab,Bb|7
diminishedScale|Diminished Scale||C,D,Eb,F,Gb,Ab,A,B|8
diminishedBluesScale|Diminished Blues Scale||C,Db,Eb,E,F#,G,A,Bb|8
diminishedb9Scale|Diminished b9 Scale||C,Db,Eb,F,Gb,Ab,Bbb|7
diminishedLocrianScale|Diminished Locrian Scale||C,Db,Eb,Fb,Gb,Ab,Bbb|7
diminishedWhole-toneIScale|Diminished Whole-tone I Scale||C,Db,Eb,Fb,Gb,Ab,Bb|7
diminishedWhole-toneIIScale|Diminished Whole-tone II Scale||C,Db,D#,E,F#,G#,Bb|7
dominant7thScale|Dominant 7th Scale||C,D,F,G,A,Bb|6
dominantBebopScale|Dominant Bebop Scale||C,D,E,F,G,A,Bb,B|8
dominantDiminishedScale|Dominant Diminished Scale||C,C#,D#,E,F#,G,A,Bb|8
dorian-AeolianmixedScale|Dorian/Aeolian mixed Scale||C,D,Eb,F,G,Ab,A,Bb|8
dorianBebopScale|Dorian Bebop Scale|American|C,D,Eb,E,F,G,A,Bb|8
dorianb2Scale|Dorian b2 Scale||C,Db,Eb,F,G,A,Bb|7
dorianb2b5Scale|Dorian b2 b5 Scale||C,Db,Eb,F,Gb,A,Bb|7
dorianb5Scale|Dorian b5 Scale||C,D,Eb,F,Gb,A,Bb|7
dorianb9Scale|Dorian b9 Scale||C,Db,Eb,F,Gb,A,Bb|7
dorianGreekScale|Dorian Greek Scale|Greek|C,Db,Eb,F,G,Ab,Bb|7
dorianScale|Dorian Scale||C,D,Eb,F,G,A,Bb|7
dorianMinorScale|Dorian Minor Scale||C,D,Eb,F,G,A,Bb|7
dorianPentatonicScale|Dorian Pentatonic Scale||C,D,F,G,Bb|5
dorian-4Scale|Dorian #4 Scale||C,D,Eb,F#,G,A,Bb|7
dorian-11Scale|Dorian #11 Scale||C,D,Eb,F#,G,A,Bb|7
doricoFlamencoScale|Dorico Flamenco Scale|Spanish|C,Db,E,F,G,Ab,Bb|7
doubleHarmonicMajorScale|Double Harmonic Major Scale||C,Db,E,F,G,Ab,B|7
doubleHarmonicMinorScale|Double Harmonic Minor Scale||C,D,Eb,F#,G,Ab,B|7
double-PhrygianHexatonicScale|Double-Phrygian Hexatonic Scale||C,Db,Eb,F,Gb,A|6
egyptianScale|Egyptian Scale|Egyptian|C,D,F,G,Bb|5
eight-NoteChineseScale|Eight-Note Chinese Scale|Chinese|C,D,E,F,G,A,Bb,B|8
eight-NoteDiminishedScale|Eight-Note Diminished Scale||C,D,Eb,F,Gb,Ab,A,B|8
eight-NoteSpanishScale|Eight-Note Spanish Scale|Spain|C,Db,D#,E,F,Gb,Ab,Bb|8
enigmaticScale|Enigmatic Scale|Italian|C,Db,E,F#,G#,A#,B|7
ethiopianScale|Ethiopian Scale|Ethiopian|C,D,E,F,G,Ab,B|7
eskimoHeptatonicScale|Eskimo Heptatonic Scale|Alaska|C,D,Eb,F,G,A,Bb|7
eskimoHexatonic1Scale|Eskimo Hexatonic 1 Scale|Alaska|C,D,Eb,F,G,Bb|6
eskimoHexatonic2-Alaska-PointHope-Scale|Eskimo Hexatonic 2 (Alaska : Point Hope) Scale|Alaska|C,D,E,Gb,Ab,B|6
eskimotetratonic-Alaska-Bethel-Scale|Eskimo tetratonic (Alaska : Bethel) Scale|Alaska|C,D,E,G|4
espl-sScale|Esplá's Scale||C,Db,Eb,E,F,Gb,Ab,Bb|8
ezelScale|Ezel Scale|Ethiopian|C,D,Eb,F,G,Ab,Bb|7
fifthModeScale|Fifth Mode Scale||C,D,E,F,G,A#|6
five-NotePrometheusScale|Five-Note Prometheus Scale||C,D,E,Gb,Bb|5
fourSemitoneIScale|Four Semitone I Scale||C,E,Ab|3
fourSemitoneIIScale|Four Semitone II Scale||C,E,G#|3
freygishScale|Freygish Scale||C,Db,D#,E,F,Gb,Ab,Bb|8
fullMinorScale|Full Minor Scale||C,D,Eb,F,G,Ab,A,Bb,B|9
geezScale|Geez Scale|Ethiopian|C,D,Eb,F,G,Ab,Bb|7
genuschromaticumScale|Genus chromaticum Scale||C,Db,Eb,E,F,G,Ab,A,B|9
genusdiatonicumScale|Genus diatonicum Scale|Latin|C,D,E,F,G,A,Bb,B|8
genusdiatonicumveterumcorrectumScale|Genus diatonicum veterum correctum Scale|Latin|C,D,E,F,Gb,G,A,B|8
genusprimumScale|Genus primum Scale|Latin|C,D,F,G|4
genussecundumScale|Genus secundum Scale|Latin|C,E,F,G,A,B|6
genustertiumScale|Genus tertium Scale|Latin|C,Eb,E,G,Ab,B|6
ghanaHeptatonicScale|Ghana Heptatonic Scale|Latin|C,D,E,F,G,A,B|7
ghanaPentatonicIScale|Ghana Pentatonic I Scale|African|C,D,Eb,F,G|5
ghanaPentatonicIIScale|Ghana Pentatonic II Scale|African|C,D,E,G,A|5
gnossiennes-Satie-Scale|Gnossiennes (Satie) Scale|French|C,D,Eb,F#,G,A,Bb|7
gongScale|Gong Scale|Chinese|C,D,E,G,A|5
gregorianno-1Scale|Gregorian no.1 Scale|Church|C,D,Eb,F,G,Ab,A,Bb|8
gregorianno-2Scale|Gregorian no.2 Scale|Church|C,D,E,F,G,A,Bb|7
gregorianno-3Scale|Gregorian no.3 Scale|Church|C,Db,Eb,F,G,Ab,Bb,B|8
gregorianno-4Scale|Gregorian no.4 Scale|Church|C,D,Eb,F,G,Ab,Bb,B|8
gregorianno-5Scale|Gregorian no.5 Scale|Church|C,D,E,F,F#,G,A,B|8
gregorianno-6Scale|Gregorian no.6 Scale|Church|C,D,E,F,G,A,Bb,B|8
gregorianno-7Scale|Gregorian no.7 Scale|Church|C,D,E,F,G,A,Bb|7
gregorianno-8Scale|Gregorian no.8 Scale|Church|C,D,Eb,F,G,A,Bb|7
gypsyHexatonicScale|Gypsy Hexatonic Scale|Romanian|C,Db,E,F,G,Ab,A|7
gypsyIScale|Gypsy I Scale|Romanian|C,D,Eb,F#,G,Ab,B|7
gypsyIIScale|Gypsy II Scale|Romanian|C,Db,E,F,G,Ab,B|7
guScale|Gu Scale|Chinese|C,D,E,F#,G,A,B|7
guXianScale|Gu Xian Scale|Chinese|C,Eb,F,G,Bb|5
half-DiminishedScale|Half-Diminished Scale||C,D,Eb,F,Gb,Ab,Bb|7
half-DiminishedBebopScale|Half-Diminished Bebop Scale|American|C,Db,Eb,F,Gb,G,Ab,B|8
half-WholestepScale|Half-Whole step Scale||C,Db,Eb,E,F#,G,A,Bb|8
half-WholetoneScale|Half-Whole tone Scale||C,Db,Eb,E,F#,G,A,Bb|8
han-IwatoScale|Han-Iwato Scale|Japanese|C,Db,F,G,Bb|5
han-kumoiScale|Han-kumoi Scale|Japanese|C,D,F,G,Ab|5
hardPentatonicScale|Hard Pentatonic Scale||C,D,F,G,A|5
harmonicandNeapolitanMinormixedScale|Harmonic and Neapolitan Minor mixed Scale||C,Db,D,Eb,F,G,Ab,B|8
harmonicMajorScale|Harmonic Major Scale||C,D,E,F,G,Ab,B|7
harmonicMajorScale|Harmonic Major Scale||C,D,E,F,G,Ab,B|7
harmonicMinorScale|Harmonic Minor Scale||C,D,Eb,F,G,Ab,B|7
hawaiianScale|Hawaiian Scale|Hawaiian|C,D,Eb,F,G,A,B|7
hawaiian2Scale|Hawaiian 2 Scale|Hawaiian|C,D,Eb,G,A,B|6
heptoniasecondaScale|Heptonia seconda Scale||C,D,Eb,F,G,A,B|7
hinduScale|Hindu Scale|Indian|C,D,E,F,G,Ab,Bb|7
hira-joshiScale|Hira-joshi Scale|Japanese|C,D,Eb,G,Ab|5
hijazScale|Hijaz Scale|Armenian|C,D,E#,F#,G#,A,B|7
hijazMajorScale|Hijaz Major Scale|Greek|C,Db,F,Gb,Ab,A,Bb|7
hijazskiarmajorScale|Hijazskiar major Scale|Greek|C,Db,E,F,G,Ab,B|7
honchoshiScale|Honchoshi Scale|Japanese|C,Db,F,G,Ab,Bb|6
honchoshiplagalformScale|Honchoshi plagal form Scale|Japanese|C,Db,Eb,F,Gb,Bb|6
honchoshi2Scale|Honchoshi 2 Scale|Japanese|C,F|2
hon-kumoi-joshiScale|Hon-kumoi-joshi Scale|Japanese|C,Db,F,G,Ab|5
houseiniScale|Houseini Scale|Greek|C,D,Eb,E,F,G,Ab,A,Bb|9
houzamIMajorScale|Houzam I Major Scale|Greek|C,D#,E,F,G,A,B|7
houzamIIScale|Houzam II Scale|Greek|C,Db,E,Gb,G,A,B|7
hungarianMajorScale|Hungarian Major Scale|Hungarian|C,D#,E,F#,G,A,Bb|7
hungarianMinorScale|Hungarian Minor Scale|Hungarian|C,D,Eb,F#,G,Ab,B|7
hyojoScale|Hyojo Scale|Japanese|C,D,Eb,F,G,A,Bb|7
hyperaeolianScale|Hyperaeolian Scale|Greek|C,Db,Eb,F,Gb,Ab,Bb|7
hyperdorianScale|Hyperdorian Scale|Greek|C,Db,Eb,F,Gb,Ab,Bb|7
hyperphrygianScale|Hyperphrygian Scale|Greek|C,D,Eb,F,G,Ab,Bb|7
hypoaeolianScale|Hypoaeolian Scale|Greek|C,Db,Eb,F,Gb,Ab,Bb|7
hypodorianScale|Hypodorian Scale|Greek|C,D,Eb,F,G,Ab,Bb|7
hypoionianScale|Hypoionian Scale|Greek|C,D,E,F,G,A,Bb|7
hypolocrianScale|Hypolocrian Scale|Greek|C,D,E,F#,G,A,B|7
hypolydianScale|Hypolydian Scale|Greek|C,D,E,F#,G,A,B|7
hypolydianScale|Hypolydian Scale|Greek|C,D,E,F#,G,A,B|7
hypomixolydianScale|Hypomixolydian Scale|Greek|C,D,Eb,F,G,A,Bb|7
hypophrygianScale|Hypophrygian Scale|Greek|C,D,E,F,G,A,Bb|7
hypophrygianScale|Hypophrygian Scale|Greek|C,D,E,F,G,A,Bb|7
inScale|In Scale|Japanese|C,Db,D,F,G,Ab,A|7
insenScale|Insen Scale|Japanese|C,Db,F,G,Ab,Bb|6
insen2Scale|Insen 2 Scale|Japanese|C,Db,F,G,Bb|5
invertedAugmentedScale|Inverted Augmented Scale||C,Db,E,F,Ab,A|6
ionianAugmentedScale|Ionian Augmented Scale||C,D,E,F,G#,A,B|7
ionianIastianScale|Ionian Iastian Scale|Greek|C,D,E,F,G,A,Bb|7
ionianScale|Ionian Scale||C,D,E,F,G,A,B|7
ionianPentatonicScale|Ionian Pentatonic Scale||C,D,E,G,A|5
ionian-5Scale|Ionian #5 Scale||C,D,E,F,G#,A,B|7
ichikotsuchoScale|Ichikotsucho Scale|Japanese|C,D,E,F,F#,G,A,B|8
iwatoScale|Iwato Scale|Japanese|C,Db,F,Gb,Bb|5
johnFoulds-MantraofWill-Scale|John Foulds' 'Mantra of Will' Scale||C,Db,E,Gb,G,Ab,A|7
japanesemodeScale|Japanese mode Scale|Japanese|C,D,Eb,G,Ab|5
jazzMinorScale|Jazz Minor Scale|African|C,D,Eb,F,G,A,B|7
jazzMinorinverseScale|Jazz Minor inverse Scale||C,Db,Eb,F,G,A,Bb|7
jeths-modeScale|Jeths' mode Scale||C,D,Eb,F,Gb,A,B|7
jewishIScale|Jewish I Scale|Jewish|C,Db,D#,E,F,Gb,Ab,Bb|8
jewishIIScale|Jewish II Scale|Jewish|C,Db,E,F,G,Ab,Bb|7
jiaoScale|Jiao Scale|Chinese|C,Eb,F,Ab,Bb|5
jiaZhongScale|Jia Zhong Scale|Chinese|C,Eb,F,G,Bb|5
jinYuScale|Jin Yu Scale|Chinese|C,D,F,G,Bb|5
kaffaScale|Kaffa Scale|Ethiopian|C,D,Eb,Gb,G,A,Bb|7
kafiThaatScale|Kafi Thaat Scale|North Indian|C,D,Eb,F,G,A,Bb|7
kalyanThaat-Yaman-Scale|Kalyan Thaat (Yaman) Scale|North Indian|C,D,E,F#,G,A,B|7
kartzihiarScale|Kartzihiar Scale|Greek|C,D,Eb,F,Gb,A,Bb|7
kata-kumoiScale|Kata-kumoi Scale|Japanese|C,D,Eb,G,Ab|5
khammajThaatScale|Khammaj Thaat Scale|North Indian|C,D,E,F,G,A,Bb|7
kiourdiMinorScale|Kiourdi Minor Scale|Greek|C,D,Eb,F,Gb,G,Ab,A,Bb|9
kiourdiascendingScale|Kiourdi ascending Scale|Greek|C,D,Eb,F,Gb,A,Bb|7
kiourdidescendingScale|Kiourdi descending Scale|Greek|C,Bb,Ab,G,F,Eb,D|7
kokin-joshiScale|Kokin-joshi Scale|Japanese|C,Db,F,G,Bb|5
kubilai-sMongolScale|Kubilai's Mongol Scale|Mongolian|C,D,E,F,Gb,G,A,B|8
kungScale|Kung Scale|Chinese|C,D,E,F#,G,A,B|7
kung2Scale|Kung 2 Scale|Chinese|C,D,E,F#,A|5
kyemyonjoScale|Kyemyonjo Scale|Korean|C,Eb,F,G,A|5
leadingWhole-toneScale|Leading Whole-tone Scale||C,D,E,F#,G#,A#,B|7
locrianDiminishedScale|Locrian Diminished Scale||C,Db,Eb,Fb,Gb,Ab,Bbb|7
locrianb4Scale|Locrian b4 Scale||C,Db,Eb,Fb,Gb,Ab,Bb|7
locrianb7Scale|Locrian b7 Scale||C,Db,Eb,F,Gb,Ab,Bbb|7
locrianbb7Scale|Locrian bb7 Scale||C,Db,Eb,F,Gb,Ab,Bbb|7
locrianScale|Locrian Scale||C,Db,Eb,F,Gb,Ab,Bb|7
locrianNat-2Scale|Locrian Nat. 2 Scale||C,D,Eb,F,Gb,Ab,Bb|7
locrianNat-2-6Scale|Locrian Nat. 2/6 Scale||C,D,Eb,F,Gb,A,Bb|7
locrianNat-2b7Scale|Locrian Nat. 2 b7 Scale||C,D,Eb,F,Gb,Ab,Bbb|7
locrianNat-6Scale|Locrian Nat. 6 Scale||C,Db,Eb,F,Gb,A,Bb|7
locrian-2bb7Scale|Locrian #2 bb7 Scale||C,D,Eb,F,Gb,Ab,Bbb|7
locrian-2Scale|Locrian #2 Scale||C,D,Eb,F,Gb,Ab,Bb|7
locrian-6Scale|Locrian #6 Scale||C,Db,Eb,F,Gb,A,Bb|7
locrian-2-6Scale|Locrian #2 #6 Scale||C,D,Eb,F,Gb,A,Bb|7
lydianAugmentedScale|Lydian Augmented Scale||C,D,E,F#,G#,A,B|7
lydianAugmented-2Scale|Lydian Augmented #2 Scale||C,D#,E,F#,G#,A,B|7
lydianDiminishedScale|Lydian Diminished Scale||C,D,Eb,F#,G,A,B|7
lydianDominantScale|Lydian Dominant Scale||C,D,E,F#,G,A,Bb|7
lydianb3Scale|Lydian b3 Scale||C,D,Eb,F#,G,A,B|7
lydianb7Scale|Lydian b7 Scale||C,D,E,F#,G,A,Bb|7
lydian-Greek-Scale|Lydian (Greek) Scale|Greek|C,D,E,F,G,A,B|7
lydianHexatonicScale|Lydian Hexatonic Scale||C,D,F,G,A,B|6
lydianScale|Lydian Scale||C,D,E,F#,G,A,B|7
lydianMinorb7Scale|Lydian Minor b7 Scale||C,D,Eb,F#,G,A,Bb|7
lydian-MixolydianScale|Lydian-Mixolydian Scale||C,D,E,F#,G,A,Bb|7
lydian-MixolydianmixedScale|Lydian/Mixolydian mixed Scale||C,D,E,F,Gb,G,A,Bb,B|9
lydian-2Scale|Lydian #2 Scale||C,D#,E,F#,G,A,B|7
lydian-5Scale|Lydian #5 Scale||C,D,E,F#,G#,A,B|7
lydian-9Scale|Lydian #9 Scale||C,D#,E,F#,G,A,B|7
magenAbotScale|Magen Abot Scale|Jewish|C,Db,D#,E,Gb,Ab,A#,B|8
majorScale|Major Scale||C,D,E,F,G,A,B|7
majorAugmentedScale|Major Augmented Scale||C,D,E,F,G#,A,B|7
majorBebopIScale|Major Bebop I Scale|American|C,D,E,F,G,G#,A,B|8
majorBebopIIScale|Major Bebop II Scale|American|C,D,E,F,G,Ab,A,B|8
majorBluesascendingScale|Major Blues ascending Scale||C,D,D#,E,G,A|6
majorBluesdescendingScale|Major Blues descending Scale||C,A,G,E,Eb,D|6
major-DorianmixedScale|Major/Dorian mixed Scale||C,D,Eb,E,F,G,A,Bb,B|9
majorGipsyScale|Major Gipsy Scale|Romanian|C,Db,E,F,G,Ab,B|7
majorinverseScale|Major inverse Scale||C,Db,Eb,F,G,Ab,Bb|7
majorLocrianmodeScale|Major Locrian mode Scale||C,D,E,F,Gb,Ab,Bb|7
major-LydianmixedScale|Major/Lydian mixed Scale||C,D,E,F,Gb,G,A,B|8
major-MinorScale|Major-Minor Scale||C,D,E,F,G,Ab,Bb|7
major-MinormixedScale|Major/Minor mixed Scale||C,D,Eb,E,F,G,Ab,A,Bb,B|10
major-MixolydianmixedScale|Major/Mixolydian mixed Scale||C,D,E,F,G,A,Bb,B|8
majorPentatonicScale|Major Pentatonic Scale||C,D,E,G,A|5
manGongScale|Man Gong Scale|Chinese|C,Eb,F,Ab,Bb|5
manJueScale|Man Jue Scale|Chinese|C,D,E,G,A|5
makamB-selikIScale|Makam Bûselik I Scale||C,D,Eb,F,G,Ab,Bb|7
makamB-selikIIScale|Makam Bûselik II Scale|Iraqian|C,D,Eb,F,G,Ab,B|7
makam-rghScale|Makam Çâârgh Scale|Iraqian|C,D,E,F,G,A,B|7
makamHijazScale|Makam Hijaz Scale|Iraqian|C,Db,E,F,G,Ab,Bb,B|8
makamRastScale|Makam Rast Scale|Iraqian|C,D,E,F,G,A,Bb,B|8
maqamAjamAshiranScale|Maqam Ajam Ashiran Scale|Iraqian|C,D,E,F,G,A,B|7
maqamBayat-e-EsfahanScale|Maqam Bayat-e-Esfahan Scale|Iraqian|C,D,Eb,F,G,Ab,B|7
maqamHedjazScale|Maqam Hedjaz Scale|Iraqian|C,D,Eb,Gb,G,A,Bb|7
maqamHicazScale|Maqam Hicaz Scale|Iraqian|C,Db,E,F,G,A,Bb|7
maqamHijazKarScale|Maqam Hijaz Kar Scale|Iraqian|C,Db,E,F,G,Ab,B|7
maqamHisarScale|Maqam Hisar Scale|Iraqian|C,D,Eb,Gb,G,Ab,B|7
maqamHumayunScale|Maqam Humayun Scale|Iraqian|C,Db,E,F,G,Ab,Bb|7
maqamHuzzamScale|Maqam Huzzam Scale|Iraqian|C,Db,Eb,Fb,G,Ab,Bb|7
maqamKarcigarScale|Maqam Karcigar Scale|Iraqian|C,D,Eb,F,Gb,A,Bb|7
maqamKurdScale|Maqam Kurd Scale|Iraqian|C,Db,Eb,F,G,Ab,Bb|7
maqamLamiScale|Maqam Lami Scale|Iraqian|C,Db,Eb,F,Gb,Ab,Bb|7
maqamNahawandScale|Maqam Nahawand Scale|Iraqian|C,D,Eb,C,G,Ab,Bb|6
maqamNahawandMurassahScale|Maqam Nahawand Murassah Scale|Iraqian|C,D,Eb,F,Gb,A,Bb|7
maqamNakrizScale|Maqam Nakriz Scale|Iraqian|C,D,Eb,Gb,G,A,Bb|7
maqamNawaAtharScale|Maqam Nawa Athar Scale|Iraqian|C,D,Eb,Gb,G,Ab,B|7
maqamNihavendScale|Maqam Nihavend Scale|Iraqian|C,D,Eb,F,G,Ab,Bb|7
maqamSabaZamzamScale|Maqam Saba Zamzam Scale|Iraqian|C,Db,Eb,Fb,G,Ab,Bb|7
maqamShadd-arabanScale|Maqam Shadd'araban Scale|Iraqian|C,Db,Eb,E,F,Gb,A,Bb|8
maqamShahnazKurdiScale|Maqam Shahnaz Kurdi Scale|Iraqian|C,Db,Eb,F,G,Ab,B|7
maqamShawqAwirScale|Maqam Shawq Awir Scale|Iraqian|C,D,E,F,G,A,Bb,B|8
maqamSultaniYakahScale|Maqam Sultani Yakah Scale|Iraqian|C,D,Eb,F,G,Ab,B|7
maqamSuzidilScale|Maqam Suzidil Scale|Iraqian|C,Db,E,F,G,Ab,B|7
maqamTarznauynScale|Maqam Tarznauyn Scale|Iraqian|C,Db,Eb,F,Gb,A,Bb|7
maqamUss-xe2kScale|Maqam Uss\xe2k Scale|Iraqian|C,D,E,F,G,Ab,Bb|7
maqamZanjaranScale|Maqam Zanjaran Scale|Iraqian|C,Db,E,F,G,A,Bb|7
maqamZenguleScale|Maqam Zengule Scale|Iraqian|C,Db,E,F,G,Ab,Bb|7
marwaThaatScale|Marwa Thaat Scale|North Indian|C,Db,E,Gb,G,A,B|7
melaBhavapriyaScale|Mela Bhavapriya Scale|South Indian|C,Db,Eb,Gb,G,Ab,Bb|7
melaCakravakaScale|Mela Cakravaka Scale|South Indian|C,Db,E,F,G,A,Bb|7
melaCalanataScale|Mela Calanata Scale|South Indian|C,Eb,E,F,G,Bb|6
melaCarukesiScale|Mela Carukesi Scale|South Indian|C,D,E,F,G,Ab,Bb|7
melaCitrambariScale|Mela Citrambari Scale|South Indian|C,D,E,Gb,G,Bb,B|7
melaDharmavatiScale|Mela Dharmavati Scale|South Indian|C,D,Eb,Gb,G,A,B|7
melaDhatuvardhaniScale|Mela Dhatuvardhani Scale|South Indian|C,Eb,E,Gb,G,Ab,B|7
melaDhavalambariScale|Mela Dhavalambari Scale|South Indian|C,Db,E,Gb,G,Ab,A|7
melaDhenukaScale|Mela Dhenuka Scale|South Indian|C,Db,Eb,F,G,Ab,B|7
melaDivyamaniScale|Mela Divyamani Scale|South Indian|C,Db,Eb,Gb,G,Bb,B|7
melaGamanasramaScale|Mela Gamanasrama Scale|South Indian|C,Db,E,Gb,G,A,B|7
melaGanamurtiScale|Mela Ganamurti Scale|South Indian|C,Db,D,F,G,Ab,B|7
melaGangeyabhusaniScale|Mela Gangeyabhusani Scale|South Indian|C,Eb,E,F,G,Ab,B|7
melaGaurimanohariScale|Mela Gaurimanohari Scale|South Indian|C,D,Eb,F,G,A,B|7
melaGavambodhiScale|Mela Gavambodhi Scale|South Indian|C,Db,Eb,Gb,G,Ab,A|7
melaGayakapriyaScale|Mela Gayakapriya Scale|South Indian|C,Db,E,F,G,Ab,A|7
melaHarikambhojiScale|Mela Harikambhoji Scale|South Indian|C,D,E,F,G,A,Bb|7
melaHatakambariScale|Mela Hatakambari Scale|South Indian|C,Db,E,F,G,Bb,B|7
melaHemavatiScale|Mela Hemavati Scale|South Indian|C,D,Eb,Gb,G,A,Bb|7
melaJalarnavaScale|Mela Jalarnava Scale|South Indian|C,Db,D,Gb,G,Ab,Bb|7
melaJhalavaraliScale|Mela Jhalavarali Scale|South Indian|C,Db,D,Gb,G,Ab,B|7
melaJhankaradhvaniScale|Mela Jhankaradhvani Scale|South Indian|C,D,Eb,F,G,Ab,A|7
melaJyotisvarupiniScale|Mela Jyotisvarupini Scale|South Indian|C,Eb,E,Gb,G,Ab,Bb|7
melaKamavardhaniScale|Mela Kamavardhani Scale|South Indian|C,Db,E,Gb,G,Ab,B|7
melaKanakangiScale|Mela Kanakangi Scale|South Indian|C,Db,D,F,G,Ab,A|7
melaKantamaniScale|Mela Kantamani Scale|South Indian|C,D,E,Gb,G,Ab,A|7
melaKharaharapriyaScale|Mela Kharaharapriya Scale|South Indian|C,D,Eb,F,G,A,Bb|7
melaKiravaniScale|Mela Kiravani Scale|South Indian|C,D,Eb,F,G,Ab,B|7
melaKokilapriyaScale|Mela Kokilapriya Scale|South Indian|C,Db,Eb,F,G,A,B|7
melaKosalamScale|Mela Kosalam Scale|South Indian|C,Eb,E,Gb,G,A,B|7
melaLatangiScale|Mela Latangi Scale|South Indian|C,D,E,Gb,G,Ab,B|7
melaManavatiScale|Mela Manavati Scale|South Indian|C,Db,D,F,G,A,B|7
melaMararanjaniScale|Mela Mararanjani Scale|South Indian|C,D,E,F,G,Ab,A|7
melaMayamalavagaulaScale|Mela Mayamalavagaula Scale|South Indian|C,Db,E,F,G,Ab,B|7
melaMecakalyaniScale|Mela Mecakalyani Scale|South Indian|C,D,E,Gb,G,A,B|7
melaNaganandiniScale|Mela Naganandini Scale|South Indian|C,D,E,F,G,A#,B|7
melaNamanarayaniScale|Mela Namanarayani Scale|South Indian|C,Db,E,Gb,G,Ab,Bb|7
melaNasikabhusaniScale|Mela Nasikabhusani Scale|South Indian|C,Eb,E,Gb,G,A,Bb|7
melaNatabhairaviScale|Mela Natabhairavi Scale|South Indian|C,D,Eb,F,G,Ab,Bb|7
melaNatakapriyaScale|Mela Natakapriya Scale|South Indian|C,Db,Eb,F,G,A,Bb|7
melaNavanitamScale|Mela Navanitam Scale|South Indian|C,Db,D,Gb,G,A,Bb|7
melaNitimatiScale|Mela Nitimati Scale|South Indian|C,D,Eb,Gb,G,Bb,B|7
melaPavaniScale|Mela Pavani Scale|South Indian|C,Db,D,Gb,G,A,B|7
melaRagavardhaniScale|Mela Ragavardhani Scale|South Indian|C,Eb,E,F,G,Ab,Bb|7
melaRaghupriyaScale|Mela Raghupriya Scale|South Indian|C,Db,D,Gb,G,Bb,B|7
melaRamapriyaScale|Mela Ramapriya Scale|South Indian|C,Db,E,Gb,G,A,Bb|7
melaRasikapriyaScale|Mela Rasikapriya Scale|South Indian|C,Eb,E,Gb,G,Bb,B|7
melaRatnangiScale|Mela Ratnangi Scale|South Indian|C,Db,D,F,G,Ab,Bb|7
melaRisabhapriyaScale|Mela Risabhapriya Scale|South Indian|C,D,E,Gb,G,Ab,Bb|7
melaRupavatiScale|Mela Rupavati Scale|South Indian|C,Db,Eb,F,G,Bb,B|7
melaSadvidhamarginiScale|Mela Sadvidhamargini Scale|South Indian|C,Db,Eb,Gb,G,A,Bb|7
melaSalagaScale|Mela Salaga Scale|South Indian|C,Db,D,Gb,G,Ab,A|7
melaSanmukhapriyaScale|Mela Sanmukhapriya Scale|South Indian|C,D,Eb,Gb,G,Ab,Bb|7
melaSarasangiScale|Mela Sarasangi Scale|South Indian|C,D,E,F,G,Ab,B|7
melaSenavatiScale|Mela Senavati Scale|South Indian|C,Db,Eb,F,G,Ab,A|7
melaShankarabharanamScale|Mela Shankarabharanam Scale|South Indian|C,D,E,F,G,A,B|7
melaShubhapantuvaraliScale|Mela Shubhapantuvarali Scale|South Indian|C,Db,Eb,Gb,G,Ab,B|7
melaSimhendramadhyamaScale|Mela Simhendramadhyama Scale|South Indian|C,D,Eb,Gb,G,Ab,B|7
melaSucaritraScale|Mela Sucaritra Scale|South Indian|C,Eb,E,Gb,G,Ab,A|7
melaSuliniScale|Mela Sulini Scale|South Indian|C,Eb,E,F,G,A,B|7
melaSuryakantaScale|Mela Suryakanta Scale|South Indian|C,Db,E,F,G,A,B|7
melaSuvarnangiScale|Mela Suvarnangi Scale|South Indian|C,Db,Eb,Gb,G,A,B|7
melaTanarupiScale|Mela Tanarupi Scale|South Indian|C,Db,D,F,G,Bb,B|7
melaVacaspatiScale|Mela Vacaspati Scale|South Indian|C,D,E,Gb,G,A,Bb|7
melaVagadhisvariScale|Mela Vagadhisvari Scale|South Indian|C,Eb,E,F,G,A,Bb|7
melaVakulabharanamScale|Mela Vakulabharanam Scale|South Indian|C,Db,E,F,G,Ab,Bb|7
melaVanaspatiScale|Mela Vanaspati Scale|South Indian|C,Db,D,F,G,A,Bb|7
melaVarunapriyaScale|Mela Varunapriya Scale|South Indian|C,D,Eb,F,G,Bb,B|7
melaVisvambhariScale|Mela Visvambhari Scale|South Indian|C,Db,E,Gb,G,Bb,B|7
melaYagapriyaScale|Mela Yagapriya Scale|South Indian|C,Eb,E,F,G,Ab,A|7
melodicMajorScale|Melodic Major Scale||C,D,E,F,G,Ab,Bb|7
melodicMinorascendingScale|Melodic Minor ascending Scale||C,D,Eb,F,G,A,B|7
melodicMinordescendingScale|Melodic Minor descending Scale||C,Bb,Ab,G,F,Eb,D|7
melodicMinor-11Scale|Melodic Minor #11 Scale||C,D,Eb,F#,G,A,B|7
messiaenmode1Scale|Messiaen mode 1 Scale||C,D,E,F#,G#,A#|6
messiaenmode2Scale|Messiaen mode 2 Scale||C,Db,Eb,E,F#,G,A,Bb|8
messiaenmode2inverseScale|Messiaen mode 2 inverse Scale||C,D,Eb,F,Gb,Ab,A,B|8
messiaenmode3Scale|Messiaen mode 3 Scale||C,D,Eb,E,F#,G,Ab,Bb,B|9
messiaenmode4Scale|Messiaen mode 4 Scale||C,Db,D,F,F#,G,Ab,B|8
messiaenmode4inverseScale|Messiaen mode 4 inverse Scale||C,Eb,E,F,Gb,A,Bb,B|8
messiaenmode5Scale|Messiaen mode 5 Scale||C,Db,D,F,F#,G,Ab,B|8
messiaenmode6Scale|Messiaen mode 6 Scale||C,D,E,F,F#,G#,A#,B|8
messiaenmode6inverseScale|Messiaen mode 6 inverse Scale||C,D,E,F,Gb,Ab,Bb,B|8
messiaenmode7Scale|Messiaen mode 7 Scale||C,Db,D,Eb,F,F#,G,Ab,A,B|10
messiaenmode7inverseScale|Messiaen mode 7 inverse Scale||C,D,Eb,E,F,Gb,Ab,A,Bb,B|10
messiaentruncatedmode5Scale|Messiaen truncated mode 5 Scale||C,Db,F#,G|4
messiaentruncatedmode5inverseScale|Messiaen truncated mode 5 inverse Scale||C,F,F#,B|4
messiaentruncatedmode6Scale|Messiaen truncated mode 6 Scale||C,D,F#,G#|4
messiaentruncatedmode6inverseScale|Messiaen truncated mode 6 inverse Scale||C,E,F#,A#|4
minorBebopScale|Minor Bebop Scale||C,D,Eb,E,F,G,A,Bb|8
minorBluesascendingScale|Minor Blues ascending Scale||C,Eb,F,Gb,G,Bb|6
minorBluesdescendingScale|Minor Blues descending Scale||C,Bb,G,Gb,F,Eb|6
minorb5Scale|Minor b5 Scale||C,D,Eb,F,Gb,Ab,Bb|7
minorGipsyScale|Minor Gipsy Scale|Romanian|C,D,Eb,F#,G,Ab,B|7
minorGipsyinverseScale|Minor Gipsy inverse Scale|Romanian|C,Db,E,F,Gb,A,Bb|7
minorHexatonicScale|Minor Hexatonic Scale||C,D,Eb,F,G,Bb|6
minorLocrianScale|Minor Locrian Scale||C,D,Eb,F,Gb,Ab,Bb|7
minor-MajorScale|Minor-Major Scale||C,D,Eb,F,G,A,B|7
minorPentatonicScale|Minor Pentatonic Scale||C,Eb,F,G,Bb|5
minorPentatonicwithleadingnotesScale|Minor Pentatonic with leading notes Scale||C,D,Eb,E,F,Gb,G,A,Bb,B|10
minyoScale|Minyo Scale|Japanese|C,Eb,F,Ab,Bb|5
mischung1Scale|Mischung 1 Scale|German|C,D,Eb,F,G,A,B|7
mischung2Scale|Mischung 2 Scale|German|C,D,E,F,G,Ab,B|7
mischung3MixolydianScale|Mischung 3 Mixolydian Scale|German|C,D,E,F,G,A,Bb|7
mischung4Scale|Mischung 4 Scale|German|C,D,Eb,F,G,Ab,B|7
mischung5DorianScale|Mischung 5 Dorian Scale|German|C,D,Eb,F,G,A,Bb|7
mischung6Scale|Mischung 6 Scale|German|C,D,E,F,G,Ab,Bb|7
misheberekhScale|Misheberekh Scale|Jewish|C,D,Eb,Gb,G,A,Bb|7
mixolydianBebopScale|Mixolydian Bebop Scale||C,D,E,F,G,A,Bb,B|8
mixolydian-DorianmixedScale|Mixolydian/Dorian mixed Scale||C,D,Eb,E,F,G,A,Bb|8
mixolydianb2Scale|Mixolydian b2 Scale||C,Db,E,F,G,A,Bb|7
mixolydianb6Scale|Mixolydian b6 Scale||C,D,E,F,G,Ab,Bb|7
mixolydianb6b9Scale|Mixolydian b6 b9 Scale||C,Db,E,F,G,Ab,Bb|7
mixolydianb9Scale|Mixolydian b9 Scale||C,Db,E,F,G,A,Bb|7
mixolydianb9b13Scale|Mixolydian b9 b13 Scale||C,Db,E,F,G,Ab,Bb|7
mixolydianGreekScale|Mixolydian Greek Scale|Greek|C,Db,Eb,F,Gb,Ab,Bb|7
mixolydianHexatonicScale|Mixolydian Hexatonic Scale||C,D,F,G,A,Bb|6
mixolydianScale|Mixolydian Scale||C,D,E,F,G,A,Bb|7
mixolydianPentatonicScale|Mixolydian Pentatonic Scale||C,D,F,G,A|5
mixolydian-1Scale|Mixolydian #1 Scale||C,Db,Eb,Fb,Gb,Ab,Bbb|7
mixolydian-4Scale|Mixolydian #4 Scale||C,D,E,F#,G,A,Bb|7
miyako-bushiIScale|Miyako-bushi I Scale|Japanese|C,Db,D,F,G,Ab,A|7
miyako-bushiIIScale|Miyako-bushi II Scale|Japanese|C,Db,F,G,Bb|5
modesofMajorPentatonicmixedScale|Modes of Major Pentatonic mixed Scale||C,D,Eb,E,F,G,Ab,A,Bb|9
modifiedBluesScale|Modified Blues Scale||C,D,Eb,F,Gb,G,Bb|7
modusconjunctusScale|Modus conjunctus Scale||C,D,Eb,F,Gb,Ab,A,B|8
moorishPhrygianScale|Moorish Phrygian Scale|Spanish|C,Db,Eb,E,F,G,Ab,Bb,B|9
nando-kyemyonjoScale|Nando-kyemyonjo Scale|Korea|C,D,Eb,F,G|5
naturalMinorScale|Natural Minor Scale||C,D,Eb,F,G,Ab,Bb|7
neapolitanMajorScale|Neapolitan Major Scale|Italian|C,Db,Eb,F,G,A,B|7
neapolitanMinorScale|Neapolitan Minor Scale|Italian|C,Db,Eb,F,G,Ab,B|7
neveseriScale|Neveseri Scale|Greek|C,Db,Eb,Gb,G,Ab,Bb,B|8
niagariScale|Niagari Scale|Japanese|C,Db,F,G,Ab,Bb|6
niagari2Scale|Niagari 2 Scale|Japanese|C,G|2
niaventiMinorScale|Niaventi Minor Scale|Greek|C,D,Eb,Gb,G,Ab,B|7
nihavendScale|Nihavend Scale|Armesian|C,D,Eb,F,G,Ab,B|7
nigrizScale|Nigriz Scale|Greek|C,D,Eb,Gb,G,A,Bb|7
nine-NoteBluesScale|Nine-Note Blues Scale||C,D,Eb,E,F,Gb,G,A,Bb|9
nine-NoteScale|Nine-Note Scale||C,D,Eb,E,Gb,G,Ab,A,B|9
nohkanFluteScale|Nohkan Flute Scale|Japanese|C,D,F,Gb,Ab,A,B|7
octatonic-Half-tone-Whole-tone-Scale|Octatonic (Half-tone,Whole-tone) Scale||C,Db,Eb,E,F#,G,A,Bb|8
octatonic-Whole-tone-Half-tone-Scale|Octatonic (Whole-tone,Half-tone) Scale||C,D,Eb,F,F#,G#,A,B|8
olymposEnharmonicScale|Olympos Enharmonic Scale|Greek|C,Db,F,G,Ab|5
orientalScale|Oriental Scale|China|C,Db,E,F,Gb,A,Bb|7
oshikicho-JapanScale|Oshikicho : Japan Scale|Japanese|C,D,Eb,F,G,A,Bb|7
ousakminorScale|Ousak minor Scale|Greek|C,Db,Eb,F,G,Ab,Bb|7
overtoneScale|Overtone Scale||C,D,E,F#,G,A,Bb|7
peiraiotikosScale|Peiraiotikos Scale|Greek|C,Db,E,Gb,G,A,B|7
peiraiotikosMinorScale|Peiraiotikos Minor Scale|Greek|C,D,Eb,Gb,G,A,Bb|7
pelogScale|Pelog Scale||C,Db,Eb,G,Bb|5
pentatonicBluesScale|Pentatonic Blues Scale||C,Eb,F,Gb,Bb|5
pentatonicMajorScale|Pentatonic Major Scale||C,D,E,G,A|5
pentatonicMajorb2Scale|Pentatonic Major b2 Scale||C,Db,E,G,A|5
pentatonicMajorb2b5Scale|Pentatonic Major b2 b5 Scale||C,Db,E,Gb,A|5
pentatonicMajorb2b6Scale|Pentatonic Major b2 b6 Scale||C,Db,E,G,Ab|5
pentatonicMajorb3Scale|Pentatonic Major b3 Scale||C,Db,Eb,Gb,A|5
pentatonicMajorb3b6Scale|Pentatonic Major b3 b6 Scale||C,D,Eb,G,Ab|5
pentatonicMajorb5Scale|Pentatonic Major b5 Scale||C,D,E,Gb,A|5
pentatonicMajorb6Scale|Pentatonic Major b6 Scale||C,D,E,G,Ab|5
pentatonicMajorb9Scale|Pentatonic Major b9 Scale||C,Db,E,G,A|5
pentatonicMajor-9b7Scale|Pentatonic Major #9 b7 Scale||C,D#,E,G,Bb|5
pentatonicMinorScale|Pentatonic Minor Scale||C,Eb,F,G,Bb|5
pentatonicMinoradded6Scale|Pentatonic Minor added 6 Scale||C,Eb,F,G,A,Bb|6
pentatonicMinorMajor6Scale|Pentatonic Minor Major 6 Scale||C,Eb,F,G,A|5
pentatonicMinor7b5Scale|Pentatonic Minor 7 b5 Scale||C,Eb,F,Gb,Bb|5
pentatonicWholeToneScale|Pentatonic Whole Tone Scale||C,E,F#,G#,A#|5
persianScale|Persian Scale|Persian|C,Db,E,F,G,Ab,B|7
peruvianmajorScale|Peruvian major Scale|Peruvian|C,D,E,F,G,A,B|7
peruvianminorScale|Peruvian minor Scale|Peruvian|C,D,Eb,F,G,Ab,Bb|7
peruvianPentatonic1Scale|Peruvian Pentatonic 1 Scale|Peruvian|C,D,E,G,A|5
peruvianPentatonic2Scale|Peruvian Pentatonic 2 Scale|Peruvian|C,Eb,F,G,Bb|5
peruviantritonic1Scale|Peruvian tritonic 1 Scale|Peruvian|C,E,G|3
peruviantritonic2Scale|Peruvian tritonic 2 Scale|Peruvian|C,Eb,A|3
petrushkachordScale|Petrushka chord Scale|Russian|C,C#,E,F#,G,A,A#|7
phrygian-AeolianmixedScale|Phrygian/Aeolian mixed Scale||C,Db,D,Eb,F,G,Ab,Bb|8
phrygianDominantScale|Phrygian Dominant Scale||C,Db,E,F,G,Ab,Bb|7
phrygianb4Scale|Phrygian b4 Scale||C,Db,Eb,Fb,G,Ab,Bb|7
phrygianGreekScale|Phrygian Greek Scale|Greek|C,D,Eb,F,G,A,Bb|7
phrygianHexatonicScale|Phrygian Hexatonic Scale||C,Eb,F,G,Ab,Bb|6
phrygian-LocrianmixedScale|Phrygian/Locrian mixed Scale||C,Db,Eb,F,Gb,G,Ab,Bb|8
phrygianMajorScale|Phrygian Major Scale||C,Db,E,F,G,Ab,Bb|7
phrygianScale|Phrygian Scale||C,Db,Eb,F,G,Ab,Bb|7
phrygian-MixolydianScale|Phrygian-Mixolydian Scale||C,Db,Eb,F,G,A,Bb|7
phrygianPentatonicScale|Phrygian Pentatonic Scale||C,Eb,F,Ab,Bb|5
phrygianNat-6Scale|Phrygian Nat. 6 Scale||C,Db,Eb,F,G,A,Bb|7
phrygian-6Scale|Phrygian #6 Scale||C,Db,Eb,F,G,A,Bb|7
pienchihScale|Pien chih Scale|Chinese|C,Db,Eb,F,Gb,Ab,Bb|7
piluThaatScale|Pilu Thaat Scale|Indian|C,D,Eb,F,G,Ab,B|7
pingScale|Ping Scale|Chinese|C,D,E,F#,G,A,B|7
pireotikosScale|Pireotikos Scale|Greek|C,Db,E,Gb,G,Ab,B|7
pomeroyScale|Pomeroy Scale||C,Db,Eb,Fb,Gb,Ab,Bb|7
primaryPentatonicScale|Primary Pentatonic Scale||C,D,E,G,A|5
prokofievScale|Prokofiev Scale||C,Db,Eb,F,Gb,Ab,Bb,B|8
prometheusScale|Prometheus Scale||C,D,E,Gb,A,Bb|6
prometheusLisztScale|Prometheus Liszt Scale||C,Db,E,F,Ab,A|6
prometheusNeapolitanScale|Prometheus Neapolitan Scale||C,Db,E,Gb,A,Bb|6
protusauthentusScale|Protus authentus Scale||C,D,Eb,F,G,A,Bb|7
protusplagisScale|Protus plagis Scale||C,D,Eb,F,G,Ab,Bb|7
pureMinorScale|Pure Minor Scale||C,D,Eb,F,G,Ab,Bb|7
purviThaatScale|Purvi Thaat Scale|North Indian|C,Db,E,Gb,G,Ab,Bb|7
p-yongjoScale|P'yongjo Scale|Korea|C,D,F,G,A,Bb|6
p-yongjo2Scale|P'yongjo 2 Scale|Korea|C,D,F,G,A|5
p-yongjo-kyemyonjoScale|P'yongjo-kyemyonjo Scale|Korea|C,Eb,F,G,Bb|5
pyramidHexatonicScale|Pyramid Hexatonic Scale||C,D,Eb,F,Gb,A|6
qingShangScale|Qing Shang Scale|Chinese|C,Eb,F,G,Bb|5
qingYuScale|Qing Yu Scale|Chinese|C,D,F,G,Bb|5
quanMingScale|Quan Ming Scale|Chinese|C,Eb,F,Ab,Bb|5
ragaAbheriScale|Raga Abheri Scale|Indian|C,Eb,F,G,Bb|5
ragaAbhogiScale|Raga Abhogi Scale|Indian|C,D,Eb,F,A|5
ragaAdanaScale|Raga Adana Scale|Indian|C,D,Eb,F,G,Ab,Bb|7
ragaAhira-LalitaScale|Raga Ahira-Lalita Scale|Indian|C,Db,E,F,Gb,A,Bb|7
ragaAhirBhairavScale|Raga Ahir Bhairav Scale|Indian|C,Db,E,F,G,A,Bb|7
ragaAhiriTodiScale|Raga Ahiri Todi Scale|Indian|C,Db,Eb,F,G,A,Bb|7
ragaAiravatiScale|Raga Airavati Scale|Indian|C,D,E,F#,G,A|6
ragaAlhaiyaBilavalScale|Raga Alhaiya Bilaval Scale|Indian|C,D,E,F,G,A,Bb,B|8
ragaAmarasenapriyaScale|Raga Amarasenapriya Scale|Indian|C,D,Eb,Gb,G,B|6
ragaAmbikaScale|Raga Ambika Scale|Indian|C,D,Eb,Gb,G,A,B|7
ragaAmritavarshiniScale|Raga Amritavarshini Scale|Indian|C,E,F#,G,B|5
ragaAnandabhairaviScale|Raga Anandabhairavi Scale|Indian|C,D,Eb,F,G,Ab,A,Bb|8
ragaAndolikaScale|Raga Andolika Scale|Indian|C,D,F,G,A,Bb|6
ragaAntaraKaishiakiScale|Raga Antara Kaishiaki Scale|Indian|C,E,G,Bb|4
ragaArabhiScale|Raga Arabhi Scale|Indian|C,D,F,G,A|5
ragaArunajualitaScale|Raga Arunajualita Scale|Indian|C,D,Eb,Gb,G,A,B|7
ragaAsavari-Asaveri-Scale|Raga Asavari (Asaveri) Scale|Indian|C,Db,Eb,F,G,Ab,Bb|7
ragaAudavTukhariScale|Raga Audav Tukhari Scale|Indian|C,D,Eb,F,Ab|5
ragaBaduhariScale|Raga Baduhari Scale|Indian|C,E,F,G,A,Bb|6
ragaBageshriScale|Raga Bageshri Scale|Indian|C,D,Eb,F,G,A,Bb|7
ragaBageshri2Scale|Raga Bageshri 2 Scale|Indian|C,D,Eb,F,A,Bb|6
ragaBaharScale|Raga Bahar Scale|Indian|C,D,Eb,F,G,A,Bb,B|8
ragaBairagi-Baira-Scale|Raga Bairagi (Baira) Scale|Indian|C,Db,F,G,Bb|5
ragaBarbaraScale|Raga Barbara Scale|Indian|C,D,E,Gb,A,Bb|6
ragaBasantScale|Raga Basant Scale|Indian|C,Db,E,Gb,G,Ab,B|7
ragaBauliScale|Raga Bauli Scale|Indian|C,Db,E,G,Ab,B|6
ragaBhankarScale|Raga Bhankar Scale|Indian|C,Db,E,F,Gb,A,Ab|7
ragaBhanumanjariScale|Raga Bhanumanjari Scale|Indian|C,Eb,E,F,G,Bb|6
ragaBhanumatiScale|Raga Bhanumati Scale|Indian|C,Db,D,F,G,A,Bb|7
ragaBhatiyarScale|Raga Bhatiyar Scale|Indian|C,Db,E,F,Gb,G,A,B|8
ragaBhavaniScale|Raga Bhavani Scale|Indian|C,Db,Eb,Gb,G,Ab,Bb|7
ragaBhavani2Scale|Raga Bhavani 2 Scale|Indian|C,D,F,A|4
ragaBhavani2Scale|Raga Bhavani 2 Scale|Indian|C,D,F,A|4
ragaBhimpalasiScale|Raga Bhimpalasi Scale|Indian|C,D,Eb,F,G,A,Bb|7
ragaBhinnaPancamaScale|Raga Bhinna Pancama Scale|Indian|C,D,F,G,Ab,B|6
ragaBhinnaShadjaScale|Raga Bhinna Shadja Scale|Indian|C,E,F,A,B|5
ragaBhogachayanataScale|Raga Bhogachayanata Scale|Indian|C,Eb,E,F,G,A,Bb|7
ragaBhup-Bhopali-Scale|Raga Bhup (Bhopali) Scale|Indian|C,D,E,G,A|5
ragaBhupalamScale|Raga Bhupalam Scale|Indian|C,Db,Eb,G,Ab|5
ragaBhupalaTodiScale|Raga Bhupala Todi Scale|Indian|C,Db,Eb,G,Ab|5
ragaBhupeshwariScale|Raga Bhupeshwari Scale|Indian|C,D,E,G,Ab|5
ragaBhusavatiScale|Raga Bhusavati Scale|Indian|C,D,E,Gb,G,A,Bb|7
ragaBibhas-bhairava-Scale|Raga Bibhas (bhairava) Scale|Indian|C,Db,Eb,G,Ab|5
ragaBibhas-marva-Scale|Raga Bibhas (marva) Scale|Indian|C,Db,E,G,A|5
ragaBihagScale|Raga Bihag Scale|Indian|C,D,E,F,Gb,G,A,B|8
ragaBilahariScale|Raga Bilahari Scale|Indian|C,D,E,G,A|5
ragaBilashkhaniScale|Raga Bilashkhani Scale|Indian|C,Db,Eb,F,G,Ab,Bb|7
ragaBilwadalaScale|Raga Bilwadala Scale|Indian|C,E,A|3
ragaBindumaliniScale|Raga Bindumalini Scale|Indian|C,Db,E,F,G,A,Bb|7
ragaBrindabaniSarangScale|Raga Brindabani Sarang Scale|Indian|C,D,F,G,Bb,B|6
ragaBrindabaniTilangScale|Raga Brindabani Tilang Scale|Indian|C,E,F,G,Bb,B|6
ragaBudhamanohariScale|Raga Budhamanohari Scale|Indian|C,D,E,F,G|5
ragaCamaraScale|Raga Camara Scale|Indian|C,D,Eb,Gb,G,Ab,Bb|7
ragaChandrajyotiScale|Raga Chandrajyoti Scale|Indian|C,Db,D,Gb,G,A|6
ragaChandrakauns-kafi-Scale|Raga Chandrakauns (kafi) Scale|Indian|C,Eb,F,A,Bb|5
ragaChandrakauns-kiravani-Scale|Raga Chandrakauns (kiravani) Scale|Indian|C,Eb,F,Ab,B|5
ragaChandrakauns-modern-Scale|Raga Chandrakauns (modern) Scale|Indian|C,Eb,F,A,B|5
ragaCharukeshiScale|Raga Charukeshi Scale|Indian|C,D,E,F,G,Ab,Bb|7
ragaChaturanginiScale|Raga Chaturangini Scale|Indian|C,D,E,F#,G,Bb,B|7
ragaChaturangini2Scale|Raga Chaturangini 2 Scale|Indian|C,D,E,F#,G,B|6
ragaChayaNatScale|Raga Chaya Nat Scale|Indian|C,D,E,F,F#,G,A,B|8
ragaChayaVatiScale|Raga Chaya Vati Scale|Indian|C,Db,E,F,A,B|6
ragaChayaTodiScale|Raga Chaya Todi Scale|Indian|C,Db,Eb,Gb,Ab|5
ragaChinthamaniScale|Raga Chinthamani Scale|Indian|C,D,Eb,Gb,G,Ab,A,Bb|8
ragaChinthamani2Scale|Raga Chinthamani 2 Scale|Indian|C,D,Eb,Gb,G,Ab,Bb|7
ragaChitthakarshiniScale|Raga Chitthakarshini Scale|Indian|C,Db,Eb,F,Ab|5
ragaCudamaniScale|Raga Cudamani Scale|Indian|C,Eb,E,F,G,Ab,Bb|7
ragaDarbarScale|Raga Darbar Scale|Indian|C,D,F,G,A,Bb|6
ragaDeshScale|Raga Desh Scale|Indian|C,D,F,G,B|5
ragaDeshgaurScale|Raga Deshgaur Scale|Indian|C,Db,G,Ab,B|5
ragaDeshiScale|Raga Deshi Scale|Indian|C,D,Eb,F,G,Ab,A,Bb|8
ragaDeshi2Scale|Raga Deshi 2 Scale|Indian|C,D,Eb,F,G,A,B|7
ragaDeshi3Scale|Raga Deshi 3 Scale|Indian|C,D,Eb,F,G,Ab,B|7
ragaDeshMalharScale|Raga Desh Malhar Scale|Indian|C,D,E,F,G,A,Bb,B|8
ragaDesisimharavamScale|Raga Desisimharavam Scale|Indian|C,D,Eb,Gb,G,A,Bb|7
ragaDeskarScale|Raga Deskar Scale|Indian|C,D,E,G,A|5
ragaDesyaTodiScale|Raga Desya Todi Scale|Indian|C,Eb,F,G,Ab,Bb|6
ragaDevakriyaScale|Raga Devakriya Scale|Indian|C,D,F,G,A|5
ragaDevamaniScale|Raga Devamani Scale|Indian|C,Eb,E,G,Ab,B|6
ragaDevaranginiScale|Raga Devarangini Scale|Indian|C,D,E,F,G,A|6
ragaDevaranjani2-Devaranji-Scale|Raga Devaranjani 2 (Devaranji) Scale|Indian|C,F,G,Ab,B|5
ragaDevarashtraScale|Raga Devarashtra Scale|Indian|C,Eb,E,Gb,G,Ab,B|7
ragaDhani-SuddhaDhanyasi-Scale|Raga Dhani (Suddha Dhanyasi) Scale|Indian|C,Eb,F,G,Bb|5
ragaDhautaPancamaScale|Raga Dhauta Pancama Scale|Indian|C,Eb,E,Gb,G,Ab,B|7
ragaDhavalangamScale|Raga Dhavalangam Scale|Indian|C,Db,E,Gb,G,Ab|6
ragaDhavalashriScale|Raga Dhavalashri Scale|Indian|C,E,F#,G,A|5
ragaDhipakaScale|Raga Dhipaka Scale|Indian|C,Db,E,Gb,G,Ab,B|7
ragaDhunibinnashadjamScale|Raga Dhunibinnashadjam Scale|Indian|C,Db,Eb,F,G,Ab,B|7
ragaDipakScale|Raga Dipak Scale|Indian|C,D,E,F,Gb,G|6
ragaDumyaragaScale|Raga Dumyaraga Scale|Indian|C,D,Eb,Gb,G,A,B|7
ragaDurgaScale|Raga Durga Scale|Indian|C,D,F,G,A|5
ragaDvigandharabushiniScale|Raga Dvigandharabushini Scale|Indian|C,D,Eb,E,G,Ab,A|7
ragaGamakakriyaScale|Raga Gamakakriya Scale|Indian|C,Db,E,Gb,G,B|6
ragaGamakasamantamScale|Raga Gamakasamantam Scale|Indian|C,Db,Eb,Gb,G,Ab,B|7
ragaGambhiranataScale|Raga Gambhiranata Scale|Indian|C,E,F,G,B|5
ragaGanasamavaraliScale|Raga Ganasamavarali Scale|Indian|C,Db,D,F,G,Ab,B|7
ragaGanavaridhiScale|Raga Ganavaridhi Scale|Indian|C,Eb,E,F,G,A,Bb|7
ragaGandharavamScale|Raga Gandharavam Scale|Indian|C,Db,Eb,F,G,Bb|6
ragaGangataranginiScale|Raga Gangatarangini Scale|Indian|C,E,F,Gb,Ab,B|6
ragaGaudSarangScale|Raga Gaud Sarang Scale|Indian|C,D,E,F,F#,G,A,B|8
ragaGaulaScale|Raga Gaula Scale|Indian|C,Db,E,F,G,Bb|6
ragaGauriScale|Raga Gauri Scale|Indian|C,Db,F,G,B|5
ragaGaurikriyaScale|Raga Gaurikriya Scale|Indian|C,Eb,Gb,G,Bb,B|6
ragaGauriVelavaliScale|Raga Gauri Velavali Scale|Indian|C,D,Eb,F,G,A|6
ragaGeyahejjajjiScale|Raga Geyahejjajji Scale|Indian|C,Db,E,F,G,Ab|6
ragaGhandarvaScale|Raga Ghandarva Scale|Indian|C,Db,D,Gb,G,Bb,B|7
ragaGhantanaScale|Raga Ghantana Scale|Indian|C,D,Eb,F,Ab,B|6
ragaGirijaScale|Raga Girija Scale|Indian|C,E,F,Ab,B|5
ragaGirvaniScale|Raga Girvani Scale|Indian|C,Db,Eb,Gb,G,Ab,A|7
ragaGitapriyaScale|Raga Gitapriya Scale|Indian|C,D,E,Gb,G,Ab,B|7
ragaGopikatilakaScale|Raga Gopikatilaka Scale|Indian|C,D,Eb,Gb,G,Bb|6
ragaGopikavasantamScale|Raga Gopikavasantam Scale|Indian|C,Eb,F,G,Ab,Bb|6
ragaGopriyaScale|Raga Gopriya Scale|Indian|C,D,E,Gb,Ab,Bb|6
ragaGorakhKalyanScale|Raga Gorakh Kalyan Scale|Indian|C,D,F,G,A,Bb|6
ragaGowleeswariScale|Raga Gowleeswari Scale|Indian|C,Db,F,Ab|4
ragaGuhamanohariScale|Raga Guhamanohari Scale|Indian|C,D,F,A,Bb|5
ragaGunakri-Gunakali-Scale|Raga Gunakri (Gunakali) Scale|Indian|C,Db,F,G,Ab|5
ragaGurjariTodiScale|Raga Gurjari Todi Scale|Indian|C,Db,Eb,Gb,Ab,Bb|6
ragaHamirKalyaniScale|Raga Hamir Kalyani Scale|Indian|C,D,E,F,Gb,G,A,B|8
ragaHamsadhvani-Hansadhvani-Scale|Raga Hamsadhvani (Hansadhvani) Scale|Indian|C,D,E,G,B|5
ragaHamsagiriScale|Raga Hamsagiri Scale|Indian|C,Eb,E,Gb,G,Bb,B|7
ragaHamsalataScale|Raga Hamsalata Scale|Indian|C,D,E,Gb,G,Ab,B|7
ragaHamsanadaScale|Raga Hamsanada Scale|Indian|C,D,F#,G,B|5
ragaHamsanandiScale|Raga Hamsanandi Scale|Indian|C,Db,E,Gb,A,B|6
ragaHamsanandi2Scale|Raga Hamsanandi 2 Scale|Indian|C,Db,E,F,Ab,B|6
ragaHamsanarayaniScale|Raga Hamsanarayani Scale|Indian|C,Db,E,Gb,G,B|6
ragaHamsaVinodiniScale|Raga Hamsa Vinodini Scale|Indian|C,D,E,F,A,B|6
ragaHansadhvani-Hamsadhvani-Scale|Raga Hansadhvani (Hamsadhvani) Scale|Indian|C,D,E,G,B|5
ragaHarikaunsScale|Raga Harikauns Scale|Indian|C,Eb,Gb,Ab,Bb|5
ragaHariNataScale|Raga Hari Nata Scale|Indian|C,E,F,G,A,B|6
ragaHariniScale|Raga Harini Scale|Indian|C,D,E,F,G,A,Bb|7
ragaHaripriyaScale|Raga Haripriya Scale|Indian|C,D,E,F,G,Ab,B|7
ragaHaripriya2Scale|Raga Haripriya 2 Scale|Indian|C,D,F,Ab|4
ragaHejjajjiScale|Raga Hejjajji Scale|Indian|C,Db,E,Gb,Ab,A|6
ragaHindol-SunadaVinodini-Scale|Raga Hindol (Sunada Vinodini) Scale|Indian|C,E,F#,A,B|5
ragaHindolaScale|Raga Hindola Scale|Indian|C,Eb,F,Ab,Bb|5
ragaHindolitaScale|Raga Hindolita Scale|Indian|C,E,F,A,B|5
ragaIndupriyaScale|Raga Indupriya Scale|Indian|C,Db,E,Gb,G,Ab|6
ragaJaganmohanamScale|Raga Jaganmohanam Scale|Indian|C,D,Gb,G,Ab,Bb|6
ragaJaitKalyanScale|Raga Jait Kalyan Scale|Indian|C,D,E,G,A|5
ragaJanasammodiniScale|Raga Janasammodini Scale|Indian|C,D,E,G,Ab|5
ragaJanjhutiScale|Raga Janjhuti Scale|Indian|C,D,E,F,G,A,Bb|7
ragaJaunpuriScale|Raga Jaunpuri Scale|Indian|C,D,Eb,F,G,Ab,Bb|7
ragaJayakaunsScale|Raga Jayakauns Scale|Indian|C,Eb,F,Gb,Bb|5
ragaJeyasuddhamalaviScale|Raga Jeyasuddhamalavi Scale|Indian|C,Db,E,F,G,Bb,B|7
ragaJhankaraBhramaviScale|Raga Jhankara Bhramavi Scale|Indian|C,D,Eb,F,G,Ab,A|7
ragaJinavaliScale|Raga Jinavali Scale|Indian|C,Db,D,Gb,G,Ab,B|7
ragaJivantikaScale|Raga Jivantika Scale|Indian|C,Db,F,G,A,B|6
ragaJivantiniScale|Raga Jivantini Scale|Indian|C,Eb,Gb,G,Bb,B|6
ragaJogScale|Raga Jog Scale|Indian|C,Eb,E,F,G,Bb|6
ragaJogiyaScale|Raga Jogiya Scale|Indian|C,Db,E,F,G,Ab,Bb|7
ragaJotismattiScale|Raga Jotismatti Scale|Indian|C,Eb,E,Gb,G,Ab,Bb|7
ragaJyotiScale|Raga Jyoti Scale|Indian|C,E,Gb,G,Ab,Bb|6
ragaKaikavasiScale|Raga Kaikavasi Scale|Indian|C,D,Eb,Gb,G,Bb,B|7
ragaKaishikiranjani-Kaushiranjani-Scale|Raga Kaishikiranjani (Kaushiranjani) Scale|Indian|C,D,Eb,F,Ab,B|6
ragaKalagadaScale|Raga Kalagada Scale|Indian|C,Db,E,G,Ab,A|6
ragaKalahamsaScale|Raga Kalahamsa Scale|Indian|C,Eb,E,F,G,Ab,A|7
ragaKalakanthiScale|Raga Kalakanthi Scale|Indian|C,Db,E,F,G,Ab,A|7
ragaKalakanthi2Scale|Raga Kalakanthi 2 Scale|Indian|C,Db,F,G,Ab,A|6
ragaKalamurtiScale|Raga Kalamurti Scale|Indian|C,Db,Eb,Gb,G,Ab,Bb|7
ragaKalavatiScale|Raga Kalavati Scale|Indian|C,Db,E,F,G,A|6
ragaKalingadaScale|Raga Kalingada Scale|Indian|C,Db,E,F,G,Ab,B|7
ragaKalyanaScale|Raga Kalyana Scale|Indian|C,D,Eb,F,G,Ab,B|7
ragaKalyaniKeseriScale|Raga Kalyani Keseri Scale|Indian|C,D,E,F#,G,A|6
ragaKamalamanohariScale|Raga Kamalamanohari Scale|Indian|C,E,F,G,Ab,B|6
ragaKamalamanohari2Scale|Raga Kamalamanohari 2 Scale|Indian|C,E,F,G,Ab,Bb|6
ragaKambhojiScale|Raga Kambhoji Scale|Indian|C,D,E,F,G,A|6
ragaKanakambariScale|Raga Kanakambari Scale|Indian|C,Db,D,F,G,Ab,A|7
ragaKannadabangalaScale|Raga Kannadabangala Scale|Indian|C,Db,E,F,G,Ab|6
ragaKapijinglaScale|Raga Kapijingla Scale|Indian|C,D,Eb,F,A,Bb|6
ragaKashyapiScale|Raga Kashyapi Scale|Indian|C,Db,Eb,G,Ab,Bb|6
ragaKasiramakriyaScale|Raga Kasiramakriya Scale|Indian|C,Db,E,Gb,G,Ab,B|7
ragaKaushikdhvaniScale|Raga Kaushikdhvani Scale|Indian|C,E,F,A,B|5
ragaKaushiranjani-KaishikiranjaniScale|Raga Kaushiranjani / Kaishikiranjani Scale|Indian|C,D,Eb,F,Ab,B|6
ragaKedarScale|Raga Kedar Scale|Indian|C,D,E,F,Gb,G,A,B|8
ragaKedaramScale|Raga Kedaram Scale|Indian|C,D,E,F,G,B|6
ragaKeseriScale|Raga Keseri Scale|Indian|C,D,E,F,G,Ab,A|7
ragaKhamajScale|Raga Khamaj Scale|Indian|C,D,E,F,G,A,Bb,B|8
ragaKhamajiDurgaScale|Raga Khamaji Durga Scale|Indian|C,E,F,A,Bb|5
ragaKhamasScale|Raga Khamas Scale|Indian|C,E,F,G,A,Bb|6
ragaKhambhavatiScale|Raga Khambhavati Scale|Indian|C,D,E,F,G,A,Bb|7
ragaKiranavaliScale|Raga Kiranavali Scale|Indian|C,D,Eb,F,G,Ab,B|7
ragaKirvaniScale|Raga Kirvani Scale|Indian|C,D,Eb,F,G,Ab,B|7
ragaKokilaScale|Raga Kokila Scale|Indian|C,D,E,G,A|5
ragaKokilaravamScale|Raga Kokilaravam Scale|Indian|C,Db,Eb,F,G,A,B|7
ragaKokilPanchamScale|Raga Kokil Pancham Scale|Indian|C,Eb,F,G,Ab|5
ragaKshanikaScale|Raga Kshanika Scale|Indian|C,Db,F,Ab,B|5
ragaKumarapriyaScale|Raga Kumarapriya Scale|Indian|C,Db,D,Ab,B|5
ragaKumbhiniScale|Raga Kumbhini Scale|Indian|C,Db,D,Gb,G,A,B|7
ragaKumudScale|Raga Kumud Scale|Indian|C,D,E,G,A,B|6
ragaKumudki-Kumurdaki-Scale|Raga Kumudki (Kumurdaki) Scale|Indian|C,D,E,Gb,B|5
ragaKuntalaScale|Raga Kuntala Scale|Indian|C,D,E,Gb,G,Ab,A|7
ragaKuntalavarali-Kuntvarali-Scale|Raga Kuntalavarali (Kuntvarali) Scale|Indian|C,F,G,A,Bb|5
ragaKusumakaramScale|Raga Kusumakaram Scale|Indian|C,Eb,E,Gb,G,A,B|7
ragaLalitScale|Raga Lalit Scale|Indian|C,Db,E,F,Gb,A,B|7
ragaLalitaScale|Raga Lalita Scale|Indian|C,Db,E,F,Gb,Ab,B|7
ragaLalita2Scale|Raga Lalita 2 Scale|Indian|C,Db,E,F,Ab,B|6
ragaLalitBhairavScale|Raga Lalit Bhairav Scale|Indian|C,Db,E,F,Ab,Bb|6
ragaLasakiScale|Raga Lasaki Scale|Indian|C,Db,F,G,Bb|5
ragaLatantapriyaScale|Raga Latantapriya Scale|Indian|C,Db,F,G,Ab|5
ragaLatikaScale|Raga Latika Scale|Indian|C,D,E,G,Ab,B|6
ragaLavangiScale|Raga Lavangi Scale|Indian|C,Db,G,Bb|4
ragaMadhavaManohariScale|Raga Madhava Manohari Scale|Indian|C,D,Eb,Gb,G,Ab,B|7
ragaMadhmatSarangScale|Raga Madhmat Sarang Scale|Indian|C,D,F,G,Bb|5
ragaMadhukauns-hexatonic-Scale|Raga Madhukauns (hexatonic) Scale|Indian|C,Eb,Gb,G,A,Bb|6
ragaMadhukauns-pentatonic-Scale|Raga Madhukauns (pentatonic) Scale|Indian|C,Eb,Gb,G,Bb|5
ragaMadhuranjaniScale|Raga Madhuranjani Scale|Indian|C,Eb,F,G,B|5
ragaMadhuriScale|Raga Madhuri Scale|Indian|C,E,F,G,A,Bb,B|7
ragaMadhuvantiScale|Raga Madhuvanti Scale|Indian|C,D,Eb,Gb,G,A,B|7
ragaMadhyamavatiScale|Raga Madhyamavati Scale|Indian|C,D,F,G,Bb|5
ragaMahathiScale|Raga Mahathi Scale|Indian|C,E,G,Bb|4
ragaMalahariScale|Raga Malahari Scale|Indian|C,Db,E,F,G,Ab|6
ragaMalarani-Hamsanada-Scale|Raga Malarani (Hamsanada) Scale|Indian|C,D,Gb,G,Bb,B|6
ragaMalashriScale|Raga Malashri Scale|Indian|C,E,F#,G,B|5
ragaMalashri2Scale|Raga Malashri 2 Scale|Indian|C,E,G|3
ragaMalayamarutamScale|Raga Malayamarutam Scale|Indian|C,Db,E,G,A,Bb|6
ragaMalgunjiScale|Raga Malgunji Scale|Indian|C,D,Eb,E,F,G,A,Bb,B|9
ragaMalkauns-Malakosh-Scale|Raga Malkauns (Malakosh) Scale|Indian|C,Eb,F,Ab,Bb,Cb|5
ragaMaliniScale|Raga Malini Scale|Indian|C,Db,Eb,F,G,Ab,A|7
ragaMamataScale|Raga Mamata Scale|Indian|C,E,G,A,B|5
ragaManaranjaniIScale|Raga Manaranjani I Scale|Indian|C,Db,E,G,Bb|5
ragaManaranjaniIIScale|Raga Manaranjani II Scale|Indian|C,Db,F,G,A|5
ragaManaviScale|Raga Manavi Scale|Indian|C,D,Eb,G,A,Bb|6
ragaMandScale|Raga Mand Scale|Indian|C,E,F,G,A|5
ragaMandariScale|Raga Mandari Scale|Indian|C,Db,E,Gb,G,B|6
ragaManiranguScale|Raga Manirangu Scale|Indian|C,D,Eb,F,G,Bb|6
ragaManohariScale|Raga Manohari Scale|Indian|C,Eb,F,G,A,Bb|6
ragaManoranjaniScale|Raga Manoranjani Scale|Indian|C,Db,D,F,G,A,B|7
ragaMargaHindolaScale|Raga Marga Hindola Scale|Indian|C,Eb,F,A,B|5
raga-xa0MarvaScale|Raga \xa0Marva Scale|Indian|C,Db,E,Gb,A,B|6
ragaMathaKokila-Matkokil-Scale|Raga Matha Kokila (Matkokil) Scale|Indian|C,D,G,A,Bb|5
ragaMeghScale|Raga Megh Scale|Indian|C,D,F,G,Bb|5
ragaMegh-MeghMalhar-Scale|Raga Megh (Megh Malhar) Scale|Indian|C,D,F,G,Bb,B|6
ragaMegharanjaniScale|Raga Megharanjani Scale|Indian|C,Db,E,F,Ab|5
ragaMegharanjiScale|Raga Megharanji Scale|Indian|C,Db,E,F,B|5
ragaMianKiMalharScale|Raga Mian Ki Malhar Scale|Indian|C,D,Eb,F,G,A,Bb,B|8
ragaMohanamScale|Raga Mohanam Scale|Indian|C,D,E,G,A|5
ragaMohanangiScale|Raga Mohanangi Scale|Indian|C,Eb,E,G,A|5
ragaMruganandanaScale|Raga Mruganandana Scale|Indian|C,D,E,F#,A,B|6
ragaMukhariScale|Raga Mukhari Scale|Indian|C,D,Eb,F,G,Ab,A,Bb|8
ragaMultaniScale|Raga Multani Scale|Indian|C,Db,Eb,Gb,G,Ab,B|7
ragaMultani2Scale|Raga Multani 2 Scale|Indian|C,Eb,Gb,G,B|5
ragaNabhomaniScale|Raga Nabhomani Scale|Indian|C,Db,D,Gb,G,A,Bb|7
ragaNabhomani2Scale|Raga Nabhomani 2 Scale|Indian|C,Db,D,Gb,G|5
ragaNagabharanamScale|Raga Nagabharanam Scale|Indian|C,D,E,F,G,Bb,B|7
ragaNagagandhariScale|Raga Nagagandhari Scale|Indian|C,D,F,G,A,B|6
ragaNagasvaravaliScale|Raga Nagasvaravali Scale|Indian|C,E,F,G,A|5
ragaNalinakantiScale|Raga Nalinakanti Scale|Indian|C,D,E,F,G,B|6
ragaNandkaunsScale|Raga Nandkauns Scale|Indian|C,Eb,E,F,G,A,Bb|7
ragaNarayaniScale|Raga Narayani Scale|Indian|C,D,F,G,A,Bb|6
ragaNarmadaScale|Raga Narmada Scale|Indian|C,Db,E,Gb,G,Ab,Bb|7
ragaNasamaniScale|Raga Nasamani Scale|Indian|C,Eb,E,Gb,G,A,Bb|7
ragaNataScale|Raga Nata Scale|Indian|C,Eb,F,G,B|5
ragaNatabharanamScale|Raga Natabharanam Scale|Indian|C,Db,Eb,F,G,A,Bb|7
ragaNattaikurinjiScale|Raga Nattaikurinji Scale|Indian|C,D,E,F,A,Bb|6
ragaNavamanohariScale|Raga Navamanohari Scale|Indian|C,D,F,G,Ab,Bb|6
ragaNayakiScale|Raga Nayaki Scale|Indian|C,D,Eb,F,G,Bb|6
ragaNayakiKanadaScale|Raga Nayaki Kanada Scale|Indian|C,D,Eb,F,G,A,Bb|7
ragaNeelangiScale|Raga Neelangi Scale|Indian|C,D,Eb,Gb,Ab,A|6
ragaNeroshtaScale|Raga Neroshta Scale|Indian|C,D,E,A,B|5
ragaNigamagaminiScale|Raga Nigamagamini Scale|Indian|C,E,Gb,B|4
ragaNileshwariScale|Raga Nileshwari Scale|Indian|C,Eb,F,Gb,G,Bb|6
ragaNisadaScale|Raga Nisada Scale|Indian|C,D,Eb,Gb,G,Bb,B|7
ragaNishadiScale|Raga Nishadi Scale|Indian|C,D,F#,G,A,B|6
ragaNoneScale|Raga None Scale|Indian|C,Eb,E,F,G,Bb,B|7
ragaOngkariScale|Raga Ongkari Scale|Indian|C,F#,G|3
ragaPadiScale|Raga Padi Scale|Indian|C,Db,F,G,Ab,B|6
ragaPahadiScale|Raga Pahadi Scale|Indian|C,D,E,F,G,Ab,A,Bb,B|9
ragaPalasiScale|Raga Palasi Scale|Indian|C,D,Eb,F,G,Bb|6
ragaPancamaScale|Raga Pancama Scale|Indian|C,Db,E,Gb,A,B|6
ragaPantuvaraliScale|Raga Pantuvarali Scale|Indian|C,Db,E,Gb,G,Ab,B|7
ragaParajScale|Raga Paraj Scale|Indian|C,Db,E,F,G,Ab,B|7
ragaParajuScale|Raga Paraju Scale|Indian|C,E,F,G,Ab,B|6
ragaPartiravamScale|Raga Partiravam Scale|Indian|C,Db,E,Gb,G,A,B|7
ragaPatdipScale|Raga Patdip Scale|Indian|C,D,Eb,F,G,A,B|7
ragaPhenadyutiScale|Raga Phenadyuti Scale|Indian|C,Db,D,F,G,Ab,Bb|7
ragaPhenadyuti2Scale|Raga Phenadyuti 2 Scale|Indian|C,Db,F,G,Ab,Bb|6
ragaPiluScale|Raga Pilu Scale|Indian|C,D,Eb,F,G,Ab,A,Bb,B|9
ragaPratapaScale|Raga Pratapa Scale|Indian|C,Db,E,Gb,G,Ab,Bb|7
ragaPriyadharshiniScale|Raga Priyadharshini Scale|Indian|C,D,F,Ab,B|5
ragaPuriyaScale|Raga Puriya Scale|Indian|C,Db,E,Gb,G,A,B|7
ragaPuriya2Scale|Raga Puriya 2 Scale|Indian|C,Db,E,Gb,A,B|6
ragaPuriyaDhanashriScale|Raga Puriya Dhanashri Scale|Indian|C,Db,E,Gb,G,Ab,B|7
ragaPuriyaKalyanScale|Raga Puriya Kalyan Scale|Indian|C,Db,E,Gb,G,A,B|7
ragaPurnalalitaScale|Raga Purnalalita Scale|Indian|C,D,Eb,F,G|5
ragaPurnaPancamaScale|Raga Purna Pancama Scale|Indian|C,Db,E,F,G,Ab|6
ragaPuruhutikaScale|Raga Puruhutika Scale|Indian|C,F,G,A,B|5
ragaPurvaholikaScale|Raga Purvaholika Scale|Indian|C,F,G,A,B|5
ragaPushpalithikaScale|Raga Pushpalithika Scale|Indian|C,D,Eb,F,G,Bb|6
ragaPutrikaScale|Raga Putrika Scale|Indian|C,Db,D,Ab,A|5
ragaRagamaliniScale|Raga Ragamalini Scale|Indian|C,Db,E,F,G,A|6
ragaRageshriScale|Raga Rageshri Scale|Indian|C,D,E,F,A,Bb,B|7
ragaRageshri2-Rageshwari-Scale|Raga Rageshri 2 (Rageshwari) Scale|Indian|C,D,E,F,A,Bb|6
ragaRajeshwariScale|Raga Rajeshwari Scale|Indian|C,Eb,F,A,B|5
ragaRamamanohariScale|Raga Ramamanohari Scale|Indian|C,Db,E,Gb,G,A,Bb|7
ragaRamamanohari2Scale|Raga Ramamanohari 2 Scale|Indian|C,E,F,G,Ab,B|6
ragaRamdasiMalharScale|Raga Ramdasi Malhar Scale|Indian|C,D,Eb,E,F,G,A,Bb,B|9
ragaRamkali-Ramakri-Scale|Raga Ramkali (Ramakri) Scale|Indian|C,Db,E,F,Gb,G,Ab,B|8
ragaRamkali2Scale|Raga Ramkali 2 Scale|Indian|C,Db,Eb,G,Ab|5
ragaRanginiScale|Raga Rangini Scale|Indian|C,D,Eb,Gb,A,B|6
ragaRanjaniScale|Raga Ranjani Scale|Indian|C,D,Eb,Gb,A,B|6
ragaRasamanjariScale|Raga Rasamanjari Scale|Indian|C,Eb,E,Gb,G,Bb,B|7
ragaRasamanjari2Scale|Raga Rasamanjari 2 Scale|Indian|C,Eb,E,Gb,G,B|6
ragaRasavaliScale|Raga Rasavali Scale|Indian|C,Db,F,G,A,Bb|6
ragaRasikaRanjaniScale|Raga Rasika Ranjani Scale|Indian|C,Db,E,G,A|5
ragaRasranjaniScale|Raga Rasranjani Scale|Indian|C,D,F,A,B|5
ragaRatipriyaScale|Raga Ratipriya Scale|Indian|C,D,E,Gb,G,Ab,Bb|7
ragaRatnakanthiScale|Raga Ratnakanthi Scale|Indian|C,D,E,F#,G,B|6
ragaRavikriyaScale|Raga Ravikriya Scale|Indian|C,Db,D,Gb,G,Bb,B|7
ragaRevaScale|Raga Reva Scale|Indian|C,Db,E,G,Ab|5
ragaRevaguptiScale|Raga Revagupti Scale|Indian|C,Db,E,G,Ab|5
ragaRudraPancamaScale|Raga Rudra Pancama Scale|Indian|C,Db,E,F,A,Bb|6
ragaRukmangiScale|Raga Rukmangi Scale|Indian|C,Db,Eb,G,Bb|5
ragaSaheraScale|Raga Sahera Scale|Indian|C,D,E,F#,G#,A#|6
ragaSailadesakshiScale|Raga Sailadesakshi Scale|Indian|C,Eb,E,F,G,A,B|7
ragaSalagavaraliScale|Raga Salagavarali Scale|Indian|C,Db,Eb,G,A,Bb|6
ragaSalanganataScale|Raga Salanganata Scale|Indian|C,Db,F,G,Ab|5
ragaSamantaScale|Raga Samanta Scale|Indian|C,D,E,F,G,Bb,B|7
ragaSamudhraPriyaScale|Raga Samudhra Priya Scale|Indian|C,Eb,Gb,G,Bb|5
ragaSanjhkaHindolScale|Raga Sanjh ka Hindol Scale|Indian|C,E,F#,A,B|5
ragaSankara-Shankara-Scale|Raga Sankara (Shankara) Scale|Indian|C,D,E,G,A,B|6
ragaSantanamanjariScale|Raga Santanamanjari Scale|Indian|C,Eb,E,Gb,G,Ab,A|7
ragaSarasananaScale|Raga Sarasanana Scale|Indian|C,D,E,F,Ab,B|6
ragaSarasvatiScale|Raga Sarasvati Scale|Indian|C,D,F#,G,A,Bb|6
ragaSaravati-Sharavati-Scale|Raga Saravati (Sharavati) Scale|Indian|C,E,F,G,Ab,A|6
ragaSarvasriScale|Raga Sarvasri Scale|Indian|C,F,G|3
ragaSaugandhiniScale|Raga Saugandhini Scale|Indian|C,Db,Gb,G,Ab|5
ragaSaurashtraScale|Raga Saurashtra Scale|Indian|C,Db,E,F,G,Ab,A,B|8
ragaSauviramScale|Raga Sauviram Scale|Indian|C,Db,Eb,Gb,G,A,B|7
ragaSaveriScale|Raga Saveri Scale|Indian|C,Db,F,G,Ab|5
ragaSavitriScale|Raga Savitri Scale|Indian|C,E,F,G,Bb,B|6
ragaSenagraniScale|Raga Senagrani Scale|Indian|C,Db,Eb,F,G,Ab,A|7
ragaShailajaScale|Raga Shailaja Scale|Indian|C,Eb,G,Ab,Bb|5
ragaShankarabharanamScale|Raga Shankarabharanam Scale|Indian|C,D,E,F,G,A,B|7
ragaShilangiScale|Raga Shilangi Scale|Indian|C,E,F#,G,B|5
ragaShobhavariScale|Raga Shobhavari Scale|Indian|C,D,F,G,Ab|5
ragaShriScale|Raga Shri Scale|Indian|C,Db,E,Gb,G,Ab,B|7
ragaShriKalyanScale|Raga Shri Kalyan Scale|Indian|C,D,F#,G,A|5
ragaShubravarniScale|Raga Shubravarni Scale|Indian|C,D,Gb,A,Bb|5
ragaShuddhKalyanScale|Raga Shuddh Kalyan Scale|Indian|C,D,E,F#,G,A,B|7
ragaSimharava-Sinharavam-Scale|Raga Simharava (Sinharavam) Scale|Indian|C,D,Eb,Gb,G,Bb|6
ragaSimhavahiniScale|Raga Simhavahini Scale|Indian|C,E,F,G,Ab,B|6
ragaSindhi-BhairaviScale|Raga Sindhi-Bhairavi Scale|Indian|C,Db,D,Eb,E,F,G,Ab,Bb,B|10
ragaSindhuraScale|Raga Sindhura Scale|Indian|C,D,Eb,F,G,A,Bb,B|8
ragaSindhuRamakriyaScale|Raga Sindhu Ramakriya Scale|Indian|C,E,F,G,Ab,B|6
ragaSindhuraKafiScale|Raga Sindhura Kafi Scale|Indian|C,D,Eb,F,G,B|6
ragaSivaKambhojiScale|Raga Siva Kambhoji Scale|Indian|C,D,E,F,G,Bb|6
ragaSivaranjini-Shivranjani-Scale|Raga Sivaranjini (Shivranjani) Scale|Indian|C,D,Eb,G,A|5
ragaSohaniScale|Raga Sohani Scale|Indian|C,Db,E,Gb,G,A,B|7
ragaSohiniScale|Raga Sohini Scale|Indian|C,Db,E,F,Ab,B|6
ragaSoratiScale|Raga Sorati Scale|Indian|C,D,F,G,A,Bb,B|7
ragaSowrashtramScale|Raga Sowrashtram Scale|Indian|C,Db,E,F,G,A,B|7
ragaSriragaScale|Raga Sriraga Scale|Indian|C,D,Eb,F,G,A,Bb|7
ragaSriranjaniScale|Raga Sriranjani Scale|Indian|C,D,Eb,F,A,Bb|6
ragaSrutiranjaniScale|Raga Srutiranjani Scale|Indian|C,D,E,Gb,G,Ab,A|7
ragaSthavarajamScale|Raga Sthavarajam Scale|Indian|C,Db,Eb,Gb,G,A,Bb|7
ragaSuddhaBangalaScale|Raga Suddha Bangala Scale|Indian|C,D,Eb,F,G,A|6
ragaSuddhaDhanyasi-Dhani-Scale|Raga Suddha Dhanyasi (Dhani) Scale|Indian|C,Eb,F,G,Bb|5
ragaSuddhaMukhariScale|Raga Suddha Mukhari Scale|Indian|C,Db,D,F,Ab,A|6
ragaSuddhaPancamaScale|Raga Suddha Pancama Scale|Indian|C,Db,E,F,Gb,Ab,B|7
ragaSuddhaRamakriyaScale|Raga Suddha Ramakriya Scale|Indian|C,Db,E,Gb,G,Ab,B|7
ragaSuddhaSaveriScale|Raga Suddha Saveri Scale|Indian|C,D,F,G,A|5
ragaSuddhaSimantiniScale|Raga Suddha Simantini Scale|Indian|C,Db,Eb,F,G,Ab|6
ragaSuddhaTodiScale|Raga Suddha Todi Scale|Indian|C,Db,Eb,F,Ab,Bb|6
ragaSuhaKanadaScale|Raga Suha Kanada Scale|Indian|C,D,Eb,C,G,Ab,Bb|6
ragaSuhaSughraiScale|Raga Suha Sughrai Scale|Indian|C,D,Eb,F,G,Bb|6
ragaSumukamScale|Raga Sumukam Scale|Indian|C,D,F#,B|4
ragaSuposhiniScale|Raga Suposhini Scale|Indian|C,D,F,G,A,Bb|6
ragaSupradhipamScale|Raga Supradhipam Scale|Indian|C,Db,E,F,G,A,B|7
ragaSuratiScale|Raga Surati Scale|Indian|C,D,E,F,G,A,Bb|7
ragaSurMalharScale|Raga Sur Malhar Scale|Indian|C,D,F,G,A,Bb,B|7
ragaSuryaScale|Raga Surya Scale|Indian|C,Eb,F,A,Bb|5
ragaSutradhariScale|Raga Sutradhari Scale|Indian|C,D,F,G,Ab|5
ragaSyamalamScale|Raga Syamalam Scale|Indian|C,D,Eb,Gb,G,Ab|6
ragaTakkaScale|Raga Takka Scale|Indian|C,Eb,F,G,Ab,B|6
ragaTanukirtiScale|Raga Tanukirti Scale|Indian|C,Db,D,F,G,Bb,B|7
ragaTaranginiScale|Raga Tarangini Scale|Indian|C,D,E,F,G,Ab,Bb|7
ragaTilangScale|Raga Tilang Scale|Indian|C,E,F,G,Bb,B|6
ragaTivravahiniScale|Raga Tivravahini Scale|Indian|C,Db,Eb,Gb,G,A,Bb|7
ragaTrimurtiScale|Raga Trimurti Scale|Indian|C,D,Eb,G,Ab,Bb|6
ragaTrishuliScale|Raga Trishuli Scale|Indian|C,Eb,E,F,G,A,B|7
ragaUdayaravicandrikaScale|Raga Udayaravicandrika Scale|Indian|C,Eb,F,G,B|5
ragaUdhayaraviChandrikaScale|Raga Udhayaravi Chandrika Scale|Indian|C,Eb,F,G,Bb|5
ragaVaijayantiScale|Raga Vaijayanti Scale|Indian|C,D,F#,G,B|5
ragaValajiScale|Raga Valaji Scale|Indian|C,E,G,A,Bb|5
ragaVamsavathiScale|Raga Vamsavathi Scale|Indian|C,Db,Eb,Gb,G,Bb,B|7
ragaVaraliScale|Raga Varali Scale|Indian|C,Db,D,Gb,G,Ab,B|7
ragaVaramuScale|Raga Varamu Scale|Indian|C,Eb,F,A,Bb|5
ragaVariniScale|Raga Varini Scale|Indian|C,Eb,G,Ab,Bb|5
ragaVasanthaScale|Raga Vasantha Scale|Indian|C,D,Eb,F,G,Ab,B|7
ragaVasantha2Scale|Raga Vasantha 2 Scale|Indian|C,Db,E,F,A,B|6
ragaVasantha-bhairavi-Scale|Raga Vasantha (bhairavi) Scale|Indian|C,Db,E,F,Ab,Bb|6
ragaVativasanta-bhairavi-Scale|Raga Vativasanta (bhairavi) Scale|Indian|C,Db,E,F,G,Ab,Bb|7
ragaVegavahiniScale|Raga Vegavahini Scale|Indian|C,Db,E,F,G,A,Bb|7
ragaVelavaliScale|Raga Velavali Scale|Indian|C,D,Eb,F,G,A,B|7
ragaVibhas-bhairava-Scale|Raga Vibhas (bhairava) Scale|Indian|C,Db,E,G,Ab|5
ragaVibhas-marva-Scale|Raga Vibhas (marva) Scale|Indian|C,Db,E,G,A|5
ragaVibhavari-Revati-Scale|Raga Vibhavari (Revati) Scale|Indian|C,Db,F,G,Bb|5
ragaVijayanagariScale|Raga Vijayanagari Scale|Indian|C,D,Eb,Gb,G,A|6
ragaVijayasriScale|Raga Vijayasri Scale|Indian|C,Db,D,Gb,G,B|6
ragaVijayavasantaScale|Raga Vijayavasanta Scale|Indian|C,E,F#,G,Bb,B|6
ragaVilasiniScale|Raga Vilasini Scale|Indian|C,D,E,F,G,B|6
ragaViravasanthamScale|Raga Viravasantham Scale|Indian|C,D,Eb,F,G,Bb,B|7
ragaVivardhiniScale|Raga Vivardhini Scale|Indian|C,D,E,F,G,Bb|6
ragaViyogavaraliScale|Raga Viyogavarali Scale|Indian|C,Db,Eb,F,Ab,B|6
ragaVutariScale|Raga Vutari Scale|Indian|C,E,F#,G,A,Bb|6
ragaYamanKalyanScale|Raga Yaman Kalyan Scale|Indian|C,D,E,F,Gb,G,A,B|8
ragaYamunaKalyaniScale|Raga Yamuna Kalyani Scale|Indian|C,D,E,F#,G,A|6
ragaYashranjaniScale|Raga Yashranjani Scale|Indian|C,Db,Gb,G,Ab|5
ragaZilafScale|Raga Zilaf Scale|Indian|C,E,F,G,Ab|5
ragaZillaScale|Raga Zilla Scale|Indian|C,D,Eb,E,F,G,A,Bb|8
rastScale|Rast Scale|Armesian|C,D,E,F,G,A,B|7
rastascendingScale|Rast ascending Scale|Greek|C,D,E,F,G,A,B|7
rastdescendingScale|Rast descending Scale|Greek|C,Bb,A,G,F,E,D|7
ravelScale|Ravel Scale||C,Db,Eb,Fb,Gb,Ab,Bb|7
relativeMinorPentatonicScale|Relative Minor Pentatonic Scale||C,Eb,F,G,Bb|5
ritsuScale|Ritsu Scale|Japanese|C,Db,Eb,F,Ab,Bb|6
ritsuGagakuScale|Ritsu Gagaku Scale|Japanese|C,D,F,G,A|5
ritsusenScale|Ritsusen Scale|Japanese|C,D,F,G,A|5
romanianMajorScale|Romanian Major Scale|Romanian|C,Db,E,F#,G,A,Bb|7
romanianMinorScale|Romanian Minor Scale|Romanian|C,D,Eb,F#,G,A,Bb|7
ruiBinScale|Rui Bin Scale|Chinese|C,D,F,G,Bb|5
ryoScale|Ryo Scale|Japanese|C,D,E,F,Gb,G,A,Bb,B|9
ryosenScale|Ryosen Scale|Japanese|C,D,E,G,A|5
ryukyuScale|Ryukyu Scale|Japanese|C,E,F,G,B|5
sabachminorScale|Sabach minor Scale|Greek|C,D,Eb,E,G,Ab,Bb|7
sakuraScale|Sakura Scale|Japanese|C,Db,F,G,Ab|5
sansagariScale|Sansagari Scale|Japanese|C,F,A#|3
scottishHexatonicScale|Scottish Hexatonic Scale|Scotland|C,D,E,F,G,A|6
scottishPentatonicScale|Scottish Pentatonic Scale|Scotland|C,D,F,G,A|5
scriabinScale|Scriabin Scale|Scotland|C,Db,E,G,A|5
seScale|Se Scale|Chinese|C,D,Eb,F,G,Ab,Bb|7
sengahScale|Sengah Scale|Greek|C,Eb,E,F,G,Ab,B|7
shangScale|Shang Scale|Chinese|C,D,E,F,G,A,Bb|7
shang2Scale|Shang 2 Scale|Chinese|C,D,F,G,Bb|5
shostakovichScale|Shostakovich Scale|Russian|C,Db,Eb,E,Gb,G,A,B|8
souzinakminorScale|Souzinak minor Scale|Greek|C,D,Eb,Gb,G,A,Bb|7
spanishGypsyScale|Spanish Gypsy Scale|Spanish|C,Db,E,F,G,Ab,Bb|7
spanishMajorScale|Spanish Major Scale|Spanish|C,Db,E,F,G,Ab,Bb|7
spanishModeScale|Spanish Mode Scale|Spanish|C,Db,Eb,F,G,Ab,Bb|7
spanishPhrygianIScale|Spanish Phrygian I Scale|Spanish|C,Db,E,F,G,Ab,Bb|7
spanishPhrygianIIScale|Spanish Phrygian II Scale|Spanish|C,Db,Eb,E,F,G,Ab,Bb|8
spanishPhrygianIIIScale|Spanish Phrygian III Scale|Spanish|C,D,Eb,F#,G,A,Bb|7
superLocrianScale|Super Locrian Scale||C,Db,Eb,Fb,Gb,Ab,Bb|7
superLocriandiminishedScale|Super Locrian diminished Scale||C,Db,Eb,Fb,Gb,Ab,Bbb|7
suspendedPentatonicScale|Suspended Pentatonic Scale||C,D,F,G,Bb|5
symmetricalDiminishedScale|Symmetrical Diminished Scale||C,Db,Eb,E,F#,G,A,Bb|8
symmetricalDecatonicScale|Symmetrical Decatonic Scale||C,Db,D,E,F,Gb,G,Ab,Bb,B|10
syntheticMixture-5Scale|Synthetic Mixture #5 Scale||C,D,E,F#,G#,A,Bb|7
syrianpentatonicScale|Syrian pentatonic Scale|Syrian|C,Db,E,F,Ab|5
tabahaniotikoScale|Tabahaniotiko Scale|Greek|C,D,E,F,G,Ab,B|7
taishikichoScale|Taishikicho Scale|Japanese|C,D,E,F,Gb,G,A,Bb,B|9
takemitsuTreeLinemode1Scale|Takemitsu Tree Line mode 1 Scale|Japanese|C,D,Eb,Gb,Ab,B|6
takemitsuTreeLinemode2Scale|Takemitsu Tree Line mode 2 Scale|Japanese|C,D,Eb,Gb,Ab,Bb|6
tcherepninNine-NoteModeIScale|Tcherepnin Nine-Note Mode I Scale|Russian|C,Db,Eb,E,F,G,Ab,A,B|9
tcherepninMajorPentatonicModeIScale|Tcherepnin Major Pentatonic Mode I Scale|Russian|C,D,E,G,A|5
tcherepninMajorPentatonicModeIIScale|Tcherepnin Major Pentatonic Mode II Scale|Russian|C,D,F,G,B|5
tcherepninMajorPentatonicModeIIIScale|Tcherepnin Major Pentatonic Mode III Scale|Russian|C,Eb,F,Ab,Bb|5
tcherepninMajorPentatonicModeIVScale|Tcherepnin Major Pentatonic Mode IV Scale|Russian|C,D,F,G,A|5
tcherepninMajorPentatonicModeVScale|Tcherepnin Major Pentatonic Mode V Scale|Russian|C,Eb,F,G,Bb|5
tcherepninMinorPentatonicModeIScale|Tcherepnin Minor Pentatonic Mode I Scale|Russian|C,D,Eb,G,Ab|5
tcherepninMinorPentatonicModeIIScale|Tcherepnin Minor Pentatonic Mode II Scale|Russian|C,Db,F,Gb,Bb|5
tcherepninMinorPentatonicModeIIIScale|Tcherepnin Minor Pentatonic Mode III Scale|Russian|C,E,F,A,B|5
tcherepninMinorPentatonicModeIVScale|Tcherepnin Minor Pentatonic Mode IV Scale|Russian|C,Db,F,G,Ab|5
tcherepninMinorPentatonicModeVScale|Tcherepnin Minor Pentatonic Mode V Scale|Russian|C,E,F#,G,B|5
tetrardusauthenticusScale|Tetrardus authenticus Scale||C,D,E,F,G,A,Bb|7
tetrardusplagisScale|Tetrardus plagis Scale||C,D,Eb,F,G,A,Bb|7
threeSemitoneScale|Three Semitone Scale||C,D#,F#,A|4
tizitaMajorScale|Tizita Major Scale|Ethiopian|C,D,E,G,A|5
tizitaMinorScale|Tizita Minor Scale|Ethiopian|C,Db,Eb,G,Ab|5
todiThaatScale|Todi Thaat Scale|Japanese|C,Db,Eb,F,G,Ab,Bb|7
todiThaat2Scale|Todi Thaat 2 Scale|Japanese|C,Db,Eb,Gb,G,Ab,B|7
tritusauthenticusScale|Tritus authenticus Scale||C,Db,Eb,Gb,G,Ab,B|7
tritusplagisScale|Tritus plagis Scale||C,D,E,F,G,A,B|7
tsinganikosScale|Tsinganikos Scale|Greek|C,Db,E,F,Gb,A,Bb|7
tunisianScale|Tunisian Scale|Tunisian|C,D,Eb,Gb,G,A,Bb|7
ultraLocrianScale|Ultra Locrian Scale||C,Db,Eb,Fb,Gb,Ab,Bbb|7
ujoScale|Ujo Scale|Korean|C,D,F,G,A|5
utetritonicScale|Ute tritonic Scale|Native North American|C,Eb,Bb|3
utilityMinorScale|Utility Minor Scale||C,D,Eb,F,G,Ab,Bb,B|8
vanderHorstOctatonicScale|Van der Horst Octatonic Scale|Dutch|C,Db,Eb,F,Gb,G,A,B|8
verdi-sEnigmaticascendingScale|Verdi's Enigmatic ascending Scale|Italian|C,Db,E,Gb,Ab,Bb,B|7
verdi-sEnigmaticdescendingScale|Verdi's Enigmatic descending Scale|Italian|C,B,Ab,G,E,D,Db|7
verdi-sScalaEnigmaticaScale|Verdi's Scala Enigmatica Scale|Italian|C,Db,E,F,Gb,Ab,Bb,B|8
waraoditonicScale|Warao ditonic Scale|Native South American|C,A#|2
waraotetratonicScale|Warao tetratonic Scale|Native South American|C,D,Eb,Bb|4
waraotritonicScale|Warao tritonic Scale|Native South American|C,F,G|3
whole-HalfstepScale|Whole-Half step Scale||C,D,Eb,F,Gb,Ab,A,B|8
whole-HalftoneScale|Whole-Half tone Scale||C,D,Eb,F,Gb,Ab,A,B|8
whole-toneIScale|Whole-tone I Scale||C,D,E,F#,G#,A#|6
xinScale|Xin Scale|Chinese|C,D,E,F,G,A,B|7
yishtabachScale|Yishtabach Scale|Israelian|C,Db,Eb,F,Gb,Ab,Bb|7
yiZeScale|Yi Ze Scale|Chinese|C,Eb,F,Ab,Bb|5
yo-shomyo-Gagaku-Scale|Yo (shomyo,Gagaku) Scale|Japanese|C,D,F,G,A|5
yonaNukiMajorScale|Yona Nuki Major Scale|Japanese|C,D,E,G,A|5
yonaNukiMinorScale|Yona Nuki Minor Scale|Japanese|C,D,Eb,G,Ab|5
yosenScale|Yosen Scale|Japanese|C,D,F,G,A,Bb|6
youlanScale|Youlan Scale|Chinese|C,Db,D,E,F,Gb,G,A,Bb|9
yuScale|Yu Scale|Chinese|C,D,Eb,F,G,A,Bb|7
yu2Scale|Yu 2 Scale|Chinese|C,Eb,F,G,Bb|5
zhalibnyMinorScale|Zhalibny Minor Scale||C,D,Eb,F,G,Ab,B|7
zhengScale|Zheng Scale|Chinese|C,D,F,G,A|5
zhiScale|Zhi Scale|Chinese|C,D,F,G,A|5
zirafkend-ArabicScale|Zirafkend : Arabic Scale|Arabian|C,D,Eb,F,G,Ab,A,B|8
zokusoScale|Zokuso Scale|Japanese|C,Db,Eb,F,G,Ab,Bb|7
)","\n");
}
}
#endif // SCALEDATA_H


