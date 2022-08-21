#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int first_question(){
  char userChoice = '\0';
  int score = 0;
  cout << endl;

  cout << "1: What country is the largest in the world?" << endl;
  
  cout << endl;
  
  cout << "A: Canada" << endl;
  cout << "B: Russia" << endl;
  cout << "C: United States of America" << endl;
  cout << "D: China" << endl;
  cout << "E: Brazil" << endl;
  
  cout << endl;

  cout << "User Choice: ";

  cin >> userChoice;

  cout << endl;

  switch(userChoice){
    case 'A':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'B':
      cout << "Correct!" << endl;
      score = 1;
    break;

    case 'C':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'D':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'E':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    default:
      cout << "Invalid Input!" << endl;
      first_question();
    break;
  }
  cout << endl;
  return score;
}

int second_question(){
  char userChoice = '\0';
  int score = 0;

  cout << endl;
  cout << "2: Who is the richest country in the world?" << endl;

  cout << endl;

  cout << "A: Bill Gates" << endl;
  cout << "B: Jeff Bozos" << endl;
  cout << "C: Elon Musk" << endl;
  cout << "D: Bernard Arnault" << endl;
  cout << "E: Gautam Adani" << endl;

  cout << endl;

  cout << "User Choice: ";

  cin >> userChoice;

  cout << endl;

  switch(userChoice){
    case 'A':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'B':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'C':
      cout << "Correct!" << endl;
      score = 1;
    break;

    case 'D':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'E':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    default:
      cout << "Invalid Input!" << endl;
      second_question();
    break;
  }
  cout << endl;
  return score;
}

int third_question(){
  char userChoice = '\0';
  int score = 0;

  cout << endl;
  cout << "3: What is the most popular programming language?" << endl;

  cout << endl;
  cout << "A: Python" << endl;
  cout << "B: JavaScript" << endl;
  cout << "C: Java" << endl;
  cout << "D: C#" << endl;
  cout << "E: C++" << endl;

  cout << endl;

  cout << "User Choice: ";

  cin >> userChoice;

  cout << endl;

  switch(userChoice){
    case 'A':
      cout << "Correct!" << endl;
      score = 1;
    break;

    case 'B':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'C':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'D':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'E':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    default:
      cout << "Invalid Input!" << endl;
      third_question();
    break;
  }
  cout << endl;
  return score;
}

int fourth_question(){
  char userChoice = '\0';
  int score = 0;

  cout << endl;
  cout << "4: What language is the most spoken in the world?" << endl;

  cout << endl;
  cout << "A: Mandarin Chinese" << endl;
  cout << "B: Spanish" << endl;
  cout << "C: Hindi" << endl;
  cout << "D: English" << endl;
  cout << "E: Standard Arabic" << endl;

  cout << endl;

  cout << "User Choice: ";

  cin >> userChoice;

  cout << endl;

  switch(userChoice){
    case 'A':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'B':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'C':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'D':
      cout << "Correct!" << endl;
      score = 1;
    break;

    case 'E':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    default:
      cout << "Invalid Input!" << endl;
      fourth_question();
    break;
  }
  cout << endl;
  return score;
}

int fifth_question(){
  char userChoice = '\0';
  int score = 0;

  cout << endl;
  cout << "5: Which city is the most visited in the world?" << endl;

  cout << endl;
  cout << "A: Soeul" << endl;
  cout << "B: London" << endl;
  cout << "C: Bangkok" << endl;
  cout << "D: Paris" << endl;
  cout << "E: Dubai" << endl;

  cout << endl;

  cout << "User Choice: ";

  cin >> userChoice;

  cout << endl;

  switch(userChoice){
    case 'A':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'B':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'C':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'D':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'E':
      cout << "Correct!" << endl;
      score = 1;
    break;

    default:
      cout << "Invalid Input!" << endl;
      fifth_question();
    break;
  }
  cout << endl;
  return score;
}

int sixth_question(){
  char userChoice = '\0';
  int score = 0;

  cout << endl;
  cout << "6: Which movie has the most box office?" << endl;

  cout << endl;
  cout << "A: Avatar" << endl;
  cout << "B: Avengers: Endgame" << endl;
  cout << "C: Titanic" << endl;
  cout << "D: Star Wars: The Force Awakens" << endl;
  cout << "E: Avengers: Infinity War" << endl;

  cout << endl;

  cout << "User Choice: ";

  cin >> userChoice;

  cout << endl;

  switch(userChoice){
    case 'A':
      cout << "Correct!" << endl;
      score = 1;
    break;

    case 'B':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'C':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'D':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'E':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    default:
      cout << "Invalid Input!" << endl;
      sixth_question();
    break;
  }
  cout << endl;
  return score;
}

int seventh_question(){
  char userChoice = '\0';
  int score = 0;

  cout << endl;
  cout << "7: Which martial arts is the most popular?" << endl;

  cout << endl;
  cout << "A: Kung Fu" << endl;
  cout << "B: MMA (Mix Martial Arts)" << endl;
  cout << "C: KickBoxing / Muay Thai" << endl;
  cout << "D: Boxing" << endl;
  cout << "E: Tae Kwon Do" << endl;

  cout << endl;

  cout << "User Choice: ";

  cin >> userChoice;

  cout << endl;

  switch(userChoice){
    case 'A':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'B':
      cout << "Correct!" << endl;
      score = 1;
    break;

    case 'C':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'D':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'E':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    default:
      cout << "Invalid Input!" << endl;
      seventh_question();
    break;
  }
  cout << endl;
  return score;
}

int eighth_question(){
  char userChoice = '\0';
  int score = 0;

  cout << endl;
  cout << "8: Which music video has the most views on YouTube" << endl;

  cout << endl;
  cout << "A: “Shape of You” – Ed Sheeran" << endl;
  cout << "B: “See You Again” – Wiz Khalifa feat. Charlie Puth" << endl;
  cout << "C: “Despacito” – Luis Fonsi feat. Daddy Yankee" << endl;
  cout << "D: “Gangnam Style” – PSY" << endl;
  cout << "E: “Uptown Funk” – Mark Ronson feat. Bruno Mars" << endl;

  cout << endl;

  cout << "User Choice: ";

  cin >> userChoice;

  cout << endl;

  switch(userChoice){
    case 'A':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'B':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'C':
      cout << "Correct!" << endl;
      score = 1;
    break;

    case 'D':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'E':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    default:
      cout << "Invalid Input!" << endl;
      eighth_question();
    break;
  }
  cout << endl;
  return score;
}

int ninth_question(){
  char userChoice = '\0';
  int score = 0;

  cout << endl;
  cout << "9: Which game is the most popular in the world?" << endl;

  cout << endl;
  cout << "A: Grand Theft Auto V (GTA V)" << endl;
  cout << "B: Fortnite" << endl;
  cout << "C: PlayUnknown Battlegrounds (PUBG)" << endl;
  cout << "D: Minecraft" << endl;
  cout << "E: League Of Legends" << endl;

  cout << endl;

  cout << "User Choice: ";

  cin >> userChoice;

  cout << endl;

  switch(userChoice){
    case 'A':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'B':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'C':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'D':
      cout << "Correct!" << endl;
      score = 1;
    break;

    case 'E':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    default:
      cout << "Invalid Input!" << endl;
      ninth_question();
    break;
  }
  cout << endl;
  return score;
}

int tenth_question(){
  char userChoice = '\0';
  int score = 0;

  cout << endl;
  cout << "10: Which is technology is the most popular?" << endl;

  cout << endl;
  cout << "A: Full Stack Development" << endl;
  cout << "B: BlockChain" << endl;
  cout << "C: Cybersecurity" << endl;
  cout << "D: Virtual Reality and Augmented Reality" << endl;
  cout << "E: Artificial Intelligence and Machine Learning" << endl;

  cout << endl;

  cout << "User Choice: ";

  cin >> userChoice;

  cout << endl;

  switch(userChoice){
    case 'A':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'B':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'C':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'D':
      cout << "Wrong!" << endl;
      score = 0;
    break;

    case 'E':
      cout << "Correct!" << endl;
      score = 1;
    break;

    default:
      cout << "Invalid Input!" << endl;
      tenth_question();
    break;
  }
  cout << endl;
  return score;
}

int main() {
  int score = 0;
  cout << "C++ Quiz" << endl;
  cout << "Welcome to the C++ Quiz!" << endl;

  score += first_question();
  cout << "Score: " << score << endl;

  score += second_question();
  cout << "Score: " << score << endl;

  score += third_question();
  cout << "Score: " << score << endl;

  score += fourth_question();
  cout << "Score: " << score << endl;

  score += fifth_question();
  cout << "Score: " << score << endl;

  score += sixth_question();
  cout << "Score: " << score << endl;

  score += seventh_question();
  cout << "Score: " << score << endl;

  score += eighth_question();
  cout << "Score: " << score << endl;

  score += ninth_question();
  cout << "Score: " << score << endl;

  score += tenth_question();
  cout << "Score: " << score << endl;

  cout << "Total Score: " << score << endl;
  cout << "Percentage Score: " << ((double)score/(double)10)*(double)100 << "%" << endl; 
}