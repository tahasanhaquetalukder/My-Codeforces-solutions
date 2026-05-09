import pygame
import random
import sys

# Initialize pygame
pygame.init()

# Screen settings
WIDTH, HEIGHT = 600, 400
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Number Guessing Game")

# Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED   = (255, 0, 0)
GREEN = (0, 200, 0)
BLUE  = (0, 0, 255)

# Fonts
font = pygame.font.SysFont(None, 36)

# Clock for FPS
clock = pygame.time.Clock()

# Game variables
number_to_guess = random.randint(1, 100)
attempts = 10
input_text = ""
message = "Guess a number between 1-100"

# Main game loop
running = True
while running:
    screen.fill(WHITE)

    # Event handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
            pygame.quit()
            sys.exit()

        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RETURN:
                if input_text.isdigit():
                    guess = int(input_text)
                    if guess == number_to_guess:
                        message = f"Correct! It was {number_to_guess}"
                    elif guess < number_to_guess:
                        message = "Too low! Try higher."
                        attempts -= 1
                    else:
                        message = "Too high! Try lower."
                        attempts -= 1

                    input_text = ""
                else:
                    message = "Enter a valid number!"
            elif event.key == pygame.K_BACKSPACE:
                input_text = input_text[:-1]
            else:
                input_text += event.unicode

    # Show attempts left
    attempts_text = font.render(f"Attempts left: {attempts}", True, BLUE)
    screen.blit(attempts_text, (20, 20))

    # Show message
    message_text = font.render(message, True, BLACK)
    screen.blit(message_text, (20, 70))

    # Show input box
    pygame.draw.rect(screen, BLACK, (20, 120, 200, 40), 2)
    input_surface = font.render(input_text, True, BLACK)
    screen.blit(input_surface, (25, 125))

    # Check for game over
    if attempts <= 0 and "Correct" not in message:
        message = f"Game Over! Number was {number_to_guess}"
        pygame.display.update()
        pygame.time.wait(3000)
        running = False
    elif "Correct" in message:
        pygame.display.update()
        pygame.time.wait(3000)
        running = False

    pygame.display.update()
    clock.tick(60)

pygame.quit()
sys.exit()