package blackjack

// ParseCard returns the integer value of a card following blackjack ruleset.
func ParseCard(card string) int {
	switch card {
    case "two":
        return 2
    case "three":
        return 3
    case "four":
        return 4
    case "five":
        return 5
    case "six":
        return 6
    case "seven":
        return 7
    case "eight":
        return 8
    case "nine":
        return 9
    case "ten","jack","queen","king":
        return 10 
    case "ace":
        return 11
    default:
        return 0
    }
}

// FirstTurn returns the decision for the first turn, given two cards of the
// player and one card of the dealer.
func FirstTurn(card1, card2, dealerCard string) string {
    var value1 int = ParseCard(card1)
    var value2 int = ParseCard(card2)
    var dealerValue int = ParseCard(dealerCard)
    
	switch {
    case card1 == "ace" && card2 == "ace":
        return "P"
    case (value1 + value2) == 21 && dealerValue != 10 && dealerValue != 11:
        return "W"
    case (value1 + value2) == 21 && dealerValue >= 10:
        return "S"
    case (value1 + value2) >= 17 && (value1 + value2) <21:
        return "S"
    case (value1 + value2) >=12 && (value1 + value2) <17 && dealerValue<7:
        return "S"
    case (value1 + value2) >=12 && (value1 + value2) <17 && dealerValue>7:
        return "H"
    default:
        return "H"
    }
}
