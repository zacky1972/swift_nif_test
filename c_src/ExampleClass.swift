import Foundation

@objc class ExampleClass: NSObject {
	var count = 0
	@objc func increment() {
		count += 1
		NSLog("increment")
	}
	@objc func increment(by amount: Int) {
		count += amount
	}
	@objc func reset() {
		count = 0
	}
}
