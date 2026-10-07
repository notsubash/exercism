package cars

// CalculateWorkingCarsPerHour calculates how many working cars are
// produced by the assembly line every hour.
func CalculateWorkingCarsPerHour(productionRate int, successRate float64) float64 {
	var workingCarsProducedPerHour float64
    workingCarsProducedPerHour = float64(productionRate) * successRate/100
    return workingCarsProducedPerHour
}

// CalculateWorkingCarsPerMinute calculates how many working cars are
// produced by the assembly line every minute.
func CalculateWorkingCarsPerMinute(productionRate int, successRate float64) int {
	var carsProducedPerHour float64
    carsProducedPerHour = CalculateWorkingCarsPerHour(productionRate, successRate)
    var carsProducedPerMinute int = int(carsProducedPerHour/60)
    return carsProducedPerMinute
}

// CalculateCost works out the cost of producing the given number of cars.
func CalculateCost(carsCount int) uint {
	var cost uint
    var divisible uint = uint(carsCount/10)
    var remainder uint = uint(carsCount%10)
    cost = divisible * 95000 + remainder * 10000
    return cost
}
