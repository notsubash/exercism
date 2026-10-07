// Package weather forecasts weather condition for a given city in Goblinocus.
package weather

var (
    // CurrentCondition represents the current weather condition of a city.
	CurrentCondition string
    // CurrentLocation represents a certain city in Goblinocus.
	CurrentLocation  string
)


// Forecast returns the name of the city followed by the current weather condition in the city. 
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
