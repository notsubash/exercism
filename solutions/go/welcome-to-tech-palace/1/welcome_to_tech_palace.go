package techpalace

import "strings"

// WelcomeMessage returns a welcome message for the customer.
func WelcomeMessage(customer string) string {
    var name string = strings.ToUpper(customer) 
	return "Welcome to the Tech Palace, " + name
}

// AddBorder adds a border to a welcome message.
func AddBorder(welcomeMsg string, numStarsPerLine int) string {
	var stars string = strings.Repeat("*", numStarsPerLine)
    return stars + "\n" + welcomeMsg + "\n" + stars
}

// CleanupMessage cleans up an old marketing message.
func CleanupMessage(oldMsg string) string {
	var starsRemoved string = strings.ReplaceAll(oldMsg, "*","")
    var cleanedText string = strings.TrimSpace(starsRemoved)
    return cleanedText
}
