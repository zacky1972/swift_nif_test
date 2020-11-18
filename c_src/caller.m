#import <Foundation/Foundation.h>
#import "ExampleClass-Swift.h"
#import "caller.h"

void caller()
{
	ExampleClass *obj = [[ExampleClass alloc] init];
	[obj increment];
	NSLog(@"Testing");
}
