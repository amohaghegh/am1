#!/usr/bin/env python
# coding: utf-8

# In[1]:


import random


# In[ ]:





# In[4]:


def display_dice(dice_value):
    if dice_value == 6:
        print("+-----+")
        print("|o o o|")
        print("|     |")
        print("|o o o|")
        print("+-----+")
    elif dice_value == 5:
        print("+-----+")
        print("|o   o|")
        print("|  o  |")
        print("|o   o|")
        print("+-----+")
    elif dice_value == 4:
        print("+-----+")
        print("|o   o|")
        print("|     |")
        print("|o   o|")
        print("+-----+")
    elif dice_value == 3:
        print("+-----+")
        print("|o    |")
        print("|  o  |")
        print("|    o|")
        print("+-----+")
    elif dice_value == 2:
        print("+-----+")
        print("|o    |")
        print("|     |")
        print("|    o|")
        print("+-----+")
    elif dice_value == 1:
        print("+-----+")
        print("|     |")
        print("|  o  |")
        print("|     |")
        print("+-----+")
# DICE AESTHETICS     
def dice_roll():
    print("Rolling dice...")
    value = random.randint(1,6)
    display_dice(value)
    return value
# DICE ROLL FUNCTION        
player_one_dice = [random.randint(1,6), random.randint(1,6), random.randint(1,6), random.randint(1,6), random.randint(1,6), random.randint(1,6)]
player_two_dice = [random.randint(1,6), random.randint(1,6), random.randint(1,6), random.randint(1,6), random.randint(1,6), random.randint(1,6)]
        

# INITIALIZING DICE
def player_one_turn():
    good=False
    global player_one_dice
    while not good:
        proceed=True
        print("Player 1, what number would you like to keep?")
        choice = input()
        try:
            int(choice)
        except ValueError:
            proceed=False
            print("This needs to be an integer")
        if proceed:
            choice=int(choice)
            if choice>0 and choice<7:
                good=True
            else:
                print("Please type a number 1-6")
            
    i = 0
    for dice in player_one_dice:
        if choice == dice:
            print ("Keeping dice of value: " + str(dice))
        else:
            player_one_dice[i] = dice_roll()
        i = i + 1
    number_of_same_dice = 0
    for dice in player_one_dice:
        if dice == choice:
            number_of_same_dice = number_of_same_dice + 1
    if number_of_same_dice == 6:
        print("Player 1 wins!")
        return True
    else:
        return False
def player_two_turn():
    good=False
    global player_two_dice
    while not good:
        proceed=True
        print("Player 2, what number would you like to keep?")
        choice = input()
        try:
            int(choice)
        except ValueError:
            proceed=False
            print("This needs to be an integer")
        if proceed:
            choice=int(choice)
            if choice>0 and choice<7:
                good=True
            else:
                print("Please type a number 1-6")
    i = 0
    for dice in player_two_dice:
        if choice == dice:
            print ("Keeping dice of value: " + str(dice))
        else:
            player_two_dice[i] = dice_roll()
        i = i + 1
    number_of_same_dice = 0
    for dice in player_two_dice:
        if dice == choice:
            number_of_same_dice = number_of_same_dice + 1
    if number_of_same_dice == 6:
        print("Player 2 wins!")
        return True
    else:
        return False
            # WIN CONDITIONS
def main_game():
    print("Welcome to the dice game!\nThe objective is to have all the dice as the same number.")
    game_over = False
    while not game_over:
        print("Player 1 has:")
        print(player_one_dice)
        print("Player 2 has:")
        print(player_two_dice)
        player_one_wins = player_one_turn()
        if player_one_wins:
            break
        print("Player 1 has:")
        print(player_one_dice)
        print("Player 2 has:")
        print(player_two_dice)
        player_two_wins = player_two_turn()
        if player_one_wins or player_two_wins:
            game_over = True
                        # MAIN GAME FUNCTION
                        
main_game()
                        
        
        


# In[ ]:


for x in range (1,7):
    display_dice(x)

