#include<iostream>

int main()
{
  std::string q1,q2,q3,q4, profile="";
  std::cout<<"=========================================================\n";
  std::cout<<"Welcome to our 4Q Personality Test!\n";
std::cout<<"=========================================================\n\n";
  std::cout<<"Q1: You are totally exhausted because your week was endless and less than great. How are you going to spend your weekend?\n\n";
  std::cout<<"E) I'll call my friends to ask about their plans. I heard that a new restaurant opened / a nice comedy is playing in the cinemas / there are big discounts at the paintball club. We should all go out together.\n";
  std::cout<<"I) I'll switch on the Don't disturb mode on my phone and stay at home. I'll watch a new episode of my favorite TV show, do a puzzle, and take a long bath with a book.\n\n";
  std::cin>>q1;
std::cout<<"\n\n=========================================================\n\n";
std::cout<<"Q2: Which of these 2 descriptions suits you more?\n\n";
std::cout<<"S) The most important thing for me is what's happening here and now. I assess real situations and pay attention to details.\nN)Facts are boring. I love to dream and play over upcoming events in my mind. I rely more on intuition than information.\n\n";
std::cin>>q2;
std::cout<<"\n\n=========================================================\n\n";
std::cout<<"Q3: A competitor of your current employer is trying to entice you. You have doubts because the salary is much higher there, but the staff here is great. Moreover, the head of your department hinted that he will recommend you to the bosses when he retires. How are you going to make a decision?\n\n";
std::cout<<"T) I'll learn all the available information about the competitor, ask my HR manager for advice, and draw a chart with all the pros and cons. In such cases, it's important to weigh up all the arguments and assess the situation with a cold mind.\nF) I'll listen to my feelings. I always try to follow my heart.\n\n";
std::cin>>q3;
std::cout<<"\n\n=========================================================\n\n";
std::cout<<"Q4: Only 2 weeks are left before your close friends' wedding. How are the preparations going?\n\nJ) One month ago, I chose the saxophonist who will play a medley of our school songs / collected the couple's photo love story / composed a poem / pressed my suit / made appointments with the stylist and makeup master. I prefer to be fully armed.\nP) Why prepare? I'll be having fun and enjoying myself at the party. I'll improvise my wedding speech. The best things happen spontaneously.\n\n";
std::cin>>q4;
std::cout<<"\n\n=========================================================\n\n";
profile = q1+q2+q3+q4;



if (profile=="ESTJ")
      {
        std::cout<<"ESTJ - The Manager\nPractical and consistent, you like to have order everywhere by planning and organizing everything. But most of all, you like to convince people of your rightness and make them think the way you think. You look at life soberly and, above all, trust facts.\nYou are open for communication, meeting new people, and spending time at parties. You never forget to take care of your close ones and can express your love very well.\n 11% men, 6% women";
      }
else if (profile=="ENTJ")
{
      std::cout<<"ENTJ - The Commander\nLife for you is a struggle and extreme. This is how you know yourself and others. Being risky and brave, you are easily inspired to start something new. At the same time, you assess your abilities, both strengths and weaknesses, quite adequately.\nYou feel new tendencies very well and are open to new ideas. You think positively and adore sport and everything connected to it.\n3% men, 1% women";
}
else if (profile=="ESFJ")
{
      std::cout<<"ESFJ - The Teacher\nYou get along with people very well, and you are the life of any party. You are attentive, caring, and always ready to help, even if you have to sacrifice your personal interests for others.\nYet you are very independent in your deals and, as a rule, you get everything without any side help. You only wait for emotional support from your close ones.\n17% women, 8% men";
 }
 else if (profile=="ESTP")
 {
      std::cout<<"ESTP - The Marshal\nParticipation is more important than victory. This is not about you. You strive to reach your goals by any means, even if you have to use physical strength. You stick to an exact plan, and you can't stand dependence and compromises.\nYou're a born fighter, very active and self-organized. You can objectively evaluate even the most stressful situation and give a quick and exact response.\n6% men, 3% women";
}
 else if (profile=="ENFJ")
 {
      std::cout<<"ENFJ - The Mentor\nYou are emotional and talkative with rich facial expressions and gesticulations. You are very empathetic to other people's emotions, and you can spot even the tiniest insincerity. You are very jealous and distrustful in love relationships.\nVery often, you are ready to face upcoming events because of your ability to feel them in advance.\n3% women, 2% men";
}
 else if(profile=="ENTP")
 {
      std::cout<<"ENTP - The Inventor\nThe generator of ideas, you are always seeking to create something new. You adapt easily to nonfamiliar environments and master different methods of work easily.\nDue to your dislike of traditions and routine, you very often change your professional spheres and hobbies, becoming an innovator and a pioneer. What is important about you is that not only can you create new ideas but you are also able to convey them to others and make them come true.\n4% men, 2% women";
}
else if(profile=="ESFP")
{
      std::cout<<"ESFP - The Politician\nYou can professionally determine the opportunities of your surroundings, and very often you use this skill to manipulate people. In communication with people, you primarily follow your personal interests. However, you try to impress everybody and create the image of a simple person.\nYou stand firmly in the present moment, and you don't like to waste time. You want quick results, disliking bureaucracy and red tape.\n10% women, 7% menn";
}
else if(profile=="ENFP")
{
      std::cout<<"ENFP - The Champion\nYou are energetic and inquisitive, with very clear creative skills. You combine the features of both introverts and extroverts, which is why not only do you get along with people easily but you also empathize well. You are very good at advising.\nYou perceive life with all the diversity of its possibilities. You have a very rich imagination and a very high IQ. You're a very harmonious person, able to keep the balance even in a very quickly changing environment.\n10% women, 6% men";
 }
else if(profile=="INFP")
{
      std::cout<<"INFP - The Healer\nA lyricist and dreamer, your inner harmony and self-agreement are always in first place. Most of your thinking happens deep inside of you. Nevertheless, you are able to foresee events and understand people well.\nYou like to dress up and try to look good in all circumstances. You can't be called thrifty, and you often lose sense of time and reality.\n5% women, 4% men";
}
else if(profile=="ISFP")
{
      std::cout<<"ISFP - The Composer\nTou can find joy in simple things, handling routine and monotony easily. You like to feel needed, which is why you always help other people but never interfere with their comfort zone. You can't stand conflicts, and you can always entertain people and make them laugh.\nYou're a very down-to-earth, practical, caring, tender, reliable, and faithful partner. You take this world as it is, never trying to lead and manipulate.\n10% women, 8% men";   
}
return 0;
}