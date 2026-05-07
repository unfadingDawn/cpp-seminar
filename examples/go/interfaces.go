package main

import "fmt"

type Geometry interface {
	Area() float64
}
type Rect struct {Width, Height float64}

func (r Rect) Area() float64 {
	return r.Width * r.Height
}
func Measure (g Geometry) {
	fmt.Println(g.Area())
}
func main(){
	r := Rect{Width:3, Height:4}
	Measure(r) //Работает автоматически
}
