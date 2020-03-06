# SimpleSmartPointerC


Example SmartPointer C++:

void func() {

  myDLIB::SmartPointer<int> pointerSaved(new int(987)); // Saves the pointer
  
} // Here deletes the Class SmartPointer and the pointer saved

void func1() {
  
  // Saves the pointer
  
  myDLIB::SmartPointerVector<int> pointerSaved(new int[10]);
  
  pointerSaved[5] = 10;

} // Here deletes the Class SmartPointerVector and the pointer of the vector saved

void func2() {

  myDLIB::SmartPointerC<int> pointerSaved(malloc(sizeof(int))); // Saves the pointer

} // Here deletes the Class SmartPointerC and the pointer saved using free()
