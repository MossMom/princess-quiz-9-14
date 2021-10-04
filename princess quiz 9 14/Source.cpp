#include <iostream> //library
#include <random> //library
using namespace std; //definitely not a programming "cheat code" to make me not have to type nearly as much as I normally would

int main() { //START OF "GAME"

    //VARIABLES
    int question = 0;
    char input = 0;
    int barbarian = 0;
    int bard = 0;
    int cleric = 0;
    int druid = 0;
    int fighter = 0;
    int monk = 0;
    int paladin = 0;
    int ranger = 0;
    int rogue = 0;
    int sorcerer = 0;
    int warlock = 0;
    int wizard = 0;
    int artificer = 0;

    { //INTRO
        do {
            cout << "What DND Class Are You? \nAssume all questions you are asked put you in the position of the player! \nClick the empty space below this message and press [x], and then [Enter], \nwhen you answer the questions, replace [x] with the number that corresponds \nwith your answer choice for the next questions. \n\n";
            cin >> input;
            if (input == 'x') { //INCOMPLETE
                cout << "Enjoy the quiz!" << endl << "--------------------------------------------------------------" << endl << endl;
            }
            else
                cout << "Please hit [Space] and then [Enter] to continue to the rest of the quiz." << endl << endl << "--------------------------------------------------------------" << endl << endl;
        } while (input != 'x');
    }

    { //QUESTION 1
        do
        { //QUESTION
            cout << "Question 1: What play style fits you best?" << endl << endl << "[1] Hack & Slash:" << endl << "The adventurers kick in the dungeon door, fight the monsters, and grab the treasure. This style of play is straightforward, fun, exciting, and action-oriented. The players spend relatively little time developing personas for their characters, roleplaying noncombat situations, or discussing anything other than the immediate dangers of the dungeon." << endl << endl << "[2] Immersive Storytelling:" << endl << "Waterdeep is threatened by political turmoil. The adventurers must convince the Masked Lords, the city's secret rulers, to resolve their differences, but can do so only after both the characters and the lords have come to terms with their differing outlooks and agendas. This style of gaming is deep, complex, and challenging. The focus isn't on combat but on negotiations, political maneuverings, and character interaction. A whole game session might pass without a single attack roll." << endl << endl << "[3] Something In Between:" << endl << "The style of play in most campaigns falls between these two extremes. There's plenty of action, but the campaign offers an ongoing storyline and interaction between characters as well. Players develop their characters' motivations and relish the chance to prove their skills in combat. To maintain the balance, provide a mixture of roleplaying encounters and combat encounters. Even in a dungeon setting, you can present NPCs that aren't meant to be fought but rather helped out, negotiated with, or just talked to." << endl << endl << "Enter your answer below:" << endl;
            cin >> input;
            if (input == '1') { //ANSWER
                cout << "You chose Hack & Slash!" << endl << "--------------------------------------------------------------" << endl << endl;
                barbarian += 5;
                bard += 1;
                cleric += 2;
                druid += 2;
                fighter += 5;
                monk += 3;
                paladin += 5;
                ranger += 2;
                rogue += 3;
                sorcerer += 1;
                warlock += 2;
                wizard += 1;
                artificer += 2;
            }
            else if (input == '2') { //ANSWER
                cout << "You chose Immersive Storytelling!" << endl << "--------------------------------------------------------------" << endl << endl;
                barbarian += 1;
                bard += 5;
                cleric += 4;
                druid += 3;
                fighter += 2;
                monk += 4;
                paladin += 1;
                ranger += 3;
                rogue += 2;
                sorcerer += 4;
                warlock += 3;
                wizard += 5;
                artificer += 3;
            }
            else if (input == '3') { //ANSWER
                cout << "You chose Something In Between!" << endl << "--------------------------------------------------------------" << endl << endl;
                barbarian += 2;
                bard += 4;
                cleric += 3;
                druid += 3;
                fighter += 3;
                monk += 3;
                paladin += 1;
                ranger += 4;
                rogue += 2;
                sorcerer += 4;
                warlock += 4;
                wizard += 3;
                artificer += 5;
            }
            else //ERROR MESSAGE
                cout << "Sorry, thats not an option! Remember to type in your answer below and hit [Enter]!" << endl << endl << "--------------------------------------------------------------" << endl << endl;
        } while (input != '1' && input != '2' && input != '3');
    }

    { //QUESTION 2
        do {
            { //QUESTION
                cout << "Question 2: On a scale of lawful to chaotic, what best fits you?" << endl << endl << "[1] Lawful:" << endl << "You follow the law, customs, or some sort of personal code that you often refer back to in order to go about your daily life, you care a lot about the rules and how things 'should be' by design of their creator." << endl << endl << "[2] Neutral:" << endl << "You don't act or lean too lawfully or chaotically, this can be stability, and allow you to not have to pick sides and go with your instincts/what feels best at the time." << endl << endl << "[3] Chaotic:" << endl << "You love change and get easily bored, you tend to do drastic or crazy things for the sake of having fun, you don't like to be contained by the rules, and you tend to do what you want before what others want." << endl << endl << "Enter your answer below:" << endl; }
            cin >> input;
            if (input == '1') { //ANSWER
                cout << "You chose Lawful!" << endl << "--------------------------------------------------------------" << endl << endl;
                barbarian += 2;
                bard += 1;
                cleric += 5;
                druid += 2;
                fighter += 3;
                monk += 5;
                paladin += 5;
                ranger += 2;
                rogue += 1;
                sorcerer += 1;
                warlock += 1;
                wizard += 4;
                artificer += 2;
            }
            else if (input == '2') { //ANSWER
                cout << "You chose Neutral!" << endl << "--------------------------------------------------------------" << endl << endl;
                barbarian += 3;
                bard += 3;
                cleric += 3;
                druid += 5;
                fighter += 5;
                monk += 3;
                paladin += 3;
                ranger += 5;
                rogue += 2;
                sorcerer += 3;
                warlock += 2;
                wizard += 3;
                artificer += 3;
            }
            else if (input == '3') { //ANSWER
                cout << "You chose Chaotic!" << endl << "--------------------------------------------------------------" << endl << endl;
                barbarian += 4;
                bard += 5;
                cleric += 2;
                druid += 2;
                fighter += 3;
                monk += 1;
                paladin += 1;
                ranger += 2;
                rogue += 5;
                sorcerer += 5;
                warlock += 5;
                wizard += 1;
                artificer += 4;
            }
            else //ERROR MESSAGE
                cout << "Sorry, thats not an option! Remember to type in your answer below and hit [Enter]!" << endl << endl << "--------------------------------------------------------------" << endl << endl;
        } while (input != '1' && input != '2' && input != '3');
    }

    { //QUESTION 3
        do {
            { //QUESTION
                cout << "Question 3: On a scale of good to evil, what best fits you? 'Good' and 'Evil' are not how you might think they are, 'Evil' does not mean inherently bad in this situation, and 'Good' does not mean perfect either, read each desription carefully." << endl << endl << "[1] Good:" << endl << "You like to help others, make the right decisions, and most significantly of all, you prioritize others well being and time above your own, you would go out of your way and potentially spend extra time to help somebody." << endl << endl << "[2] Neutral:" << endl << "You do what you think should be done, not particularly to help yourself or others, simply what has to be done, you probably don't go out of your way to help people, but you don't intentionally harm them either, you might also often follow the rule of others, allowing them to worry about the big choices." << endl << endl << "[3] Evil:" << endl << "You tend to prioritize yourself over others, you might sabotage people for your own gain or benefit, or you might just never give a second thought to how your actions are harmful, or you maybe even don't want to try to be better, while these are bad traits to have, you are not inherently an evil or bad person, you are simply more concerned for yourself than others." << endl << endl << "Enter your answer below:" << endl; }
            cin >> input;
            if (input == '1') { //ANSWER
                cout << "You chose Good!" << endl << "--------------------------------------------------------------" << endl << endl;
                barbarian += 2;
                bard += 4;
                cleric += 4;
                druid += 3;
                fighter += 3;
                monk += 4;
                paladin += 5;
                ranger += 3;
                rogue += 1;
                sorcerer += 3;
                warlock += 1;
                wizard += 3;
                artificer += 3;
            }
            else if (input == '2') { //ANSWER
                cout << "You chose Neutral!" << endl << "--------------------------------------------------------------" << endl << endl;
                barbarian += 4;
                bard += 3;
                cleric += 3;
                druid += 5;
                fighter += 4;
                monk += 5;
                paladin += 1;
                ranger += 5;
                rogue += 4;
                sorcerer += 4;
                warlock += 3;
                wizard += 5;
                artificer += 4;
            }
            else if (input == '3') { //ANSWER
                cout << "You chose Evil!" << endl << "--------------------------------------------------------------" << endl << endl;
                barbarian += 3;
                bard += 2;
                cleric += 2;
                druid += 1;
                fighter += 3;
                monk += 2;
                paladin += 4;
                ranger += 2;
                rogue += 5;
                sorcerer += 2;
                warlock += 5;
                wizard += 2;
                artificer += 2;
            }
            else //ERROR MESSAGE
                cout << "Sorry, thats not an option! Remember to type in your answer below and hit [Enter]!" << endl << endl << "--------------------------------------------------------------" << endl << endl;
        } while (input != '1' && input != '2' && input != '3');
    }


    //end of questions

    //barbarian
    if (barbarian > bard && barbarian > cleric && barbarian > druid && barbarian > fighter && barbarian > monk && barbarian > paladin && barbarian > ranger && barbarian > rogue && barbarian > sorcerer && barbarian > warlock && barbarian > wizard && barbarian > artificer)
        cout << "you are a BARBARIAN" << endl;
    //bard
    else if (bard > barbarian && bard > cleric && bard > druid && bard > fighter && bard > monk && bard > paladin && bard > ranger && bard > rogue && bard > sorcerer && bard > warlock && bard > wizard && bard > artificer)
        cout << "you're a BARD." << endl;
    //cleric
    else if (cleric > barbarian && cleric > bard && cleric > druid && cleric > fighter && cleric > monk && cleric > paladin && cleric > ranger && cleric > rogue && cleric > sorcerer && cleric > warlock && cleric > wizard && cleric > artificer)
        cout << "you're a CLERIC." << endl;
    //druid
    else if (druid > barbarian && druid > bard && druid > cleric && druid > fighter && druid > monk && druid > paladin && druid > ranger && druid > rogue && druid > sorcerer && druid > warlock && druid > wizard && druid > artificer)
        cout << "you're a DRUID." << endl;
    //fighter
    else if (fighter > barbarian && fighter > bard && fighter > cleric && fighter > druid && fighter > monk && fighter > paladin && fighter > ranger && fighter > rogue && fighter > sorcerer && fighter > warlock && fighter > wizard && fighter > artificer)
        cout << "you're a FIGHTER." << endl;
    //monk
    else if (monk > barbarian && monk > bard && monk > cleric && monk > druid && monk > fighter && monk > paladin && monk > ranger && monk > rogue && monk > sorcerer && monk > warlock && monk > wizard && monk > artificer)
        cout << "you're a MONK." << endl;
    //paladin
    else if (paladin > barbarian && paladin > bard && paladin > cleric && paladin > druid && paladin > fighter && paladin > monk && paladin > ranger && paladin > rogue && paladin > sorcerer && paladin > warlock && paladin > wizard && paladin > artificer)
        cout << "you're a PALADIN" << endl;
    //ranger
    else if (ranger > barbarian && ranger > bard && ranger > cleric && ranger > druid && ranger > monk && ranger > paladin && ranger > paladin && ranger > rogue && ranger > sorcerer && ranger > warlock && ranger > wizard && ranger > artificer)
        cout << "you're a RANGER" << endl;
    //rogue
    else if (rogue > barbarian && rogue > bard && rogue > cleric && rogue > druid && rogue > monk && rogue > paladin && rogue > paladin && rogue > ranger && rogue > sorcerer && rogue > warlock && rogue > wizard && rogue > artificer)
        cout << "you're a ROGUE" << endl;
    //sorcerer
    else if (sorcerer > barbarian && sorcerer > bard && sorcerer > cleric && sorcerer > druid && sorcerer > monk && sorcerer > paladin && sorcerer > paladin && sorcerer > ranger && sorcerer > rogue && sorcerer > warlock && sorcerer > wizard && sorcerer > artificer)
        cout << "you're a SORCERER" << endl;
    //warlock
    else if (warlock > barbarian && warlock > bard && warlock > cleric && warlock > druid && warlock > monk && warlock > paladin && warlock > paladin && warlock > ranger && warlock > rogue && warlock > sorcerer && warlock > wizard && warlock > artificer)
        cout << "you're a WARLOCK" << endl;
    //wizard
    else if (wizard > barbarian && wizard > bard && wizard > cleric && wizard > druid && wizard > monk && wizard > paladin && wizard > paladin && wizard > ranger && wizard > rogue && wizard > sorcerer && wizard > warlock && wizard > artificer)
        cout << "you're a WIZARD" << endl;
    //artificer
    else if (artificer > barbarian && artificer > bard && artificer > cleric && artificer > druid && artificer > monk && artificer > paladin && artificer > paladin && artificer > ranger && artificer > rogue && artificer > sorcerer && artificer > warlock && artificer > wizard)
        cout << "you're an ARTIFICER" << endl;
}
