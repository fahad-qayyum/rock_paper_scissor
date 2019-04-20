#include<iostream>
#include<cstdlib> 
 
int main(){
	
	int my_choice;
	int cpu_choice;
	char exit = 'Y';
	std::cout<< "Game chart:- \n1 = Rock \n2 = Paper\n3 = Scissor\n";
	while(exit == 'Y'){
		std::cout << "Enter your choice (1 / 2 / 3): ";
		std::cin >> my_choice;
    cpu_choice = (rand() % 3) + 1 ;
    
    // Both CPU and i choose the same option
		if (my_choice == cpu_choice){
		  std::cout << "OOPS! its a draw\n";
		} else {
   
      // My choice is Rock 
      if ( my_choice == 1 ){
      
        // CPU chooses scissor than I win 
        if(cpu_choice == 3){
          std::cout << "You choose Rock and CPU choose Scissor, Hence You win!\n";  
          
        // CPU chooses paper than I loose
        } else {
          std::cout << "You choose Rock and CPU choose Paper, Hence You loose!\n";  
        }
      }
      
      // My choice is Paper 
      if ( my_choice == 2 ){
      
        // CPU chooses rock than I win 
        if(cpu_choice == 1){
          std::cout << "You choose Paper and CPU choose Rock, Hence You win!\n";  
          
        // CPU chooses Scissor than I loose
        } else {
          std::cout << "You choose Paper and CPU choose Scissor, Hence You loose!\n";  
        }
      }
      
      // My choice is Scissor 
      if ( my_choice == 3 ){
      
        // CPU chooses rock than I loose 
        if(cpu_choice == 1){
          std::cout << "You choose Scissor and CPU choose Rock, Hence You Loose!\n";  
          
        // CPU chooses paper than I win
        } else {
          std::cout << "You choose Scissor and CPU choose Paper, Hence You win!\n";  
        }
      }
      
    }
    std::cout << "Do you want to replay (Y/N) : ";
    std::cin >> exit;	
	}
  std::cout << "Thanks for playing!\n";
	return 0;
}