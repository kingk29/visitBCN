//
//  MVAPriorityQueue.h
//  VisitBCN
//
//  Created by Mauro Vime Castillo on 25/11/14.
//  Copyright (c) 2014 Mauro Vime Castillo. All rights reserved.
//

/**
 *  This class creates a priority queue for the given class MVAPair
 *
 *  @see MVAPair class
 *  @since version 1.0
 */

#import <Foundation/Foundation.h>
#import "MVAPair.h"

@interface MVAPriorityQueue : NSObject

/**
 *  Predefined constructor
 *
 *  @return The MVAPriorityQueue object created
 *
 *  @since version 1.0
 */
-(id)init;

/**
 *  Constructor with capacity
 *
 *  @param numItems The initial cpacity of the priority queue.
 *
 *  @return The MVAPriorityQueue object created with the given capacity
 *
 *  @since version 1.0
 */
-(id)initWithCapacity:(NSUInteger)numItems;

/**
 *  Function to insert an element in the priority queue
 *
 *  @param pair MVAPair object that needs to be inserted in the priority queue
 *
 *  @see MVAPair class
 *  @since version 1.0
 */
-(void)addObject:(MVAPair *)pair;

/**
 *  Function that returns if the priority que is empty
 *
 *  @return Boolean that indicates if the priority queue is empty or not
 *
 *  @since version 1.0
 */
-(BOOL)isEmpty;

/**
 *  Function that returns the first object of the priority queue
 *
 *  @return The first object of the priority queue
 *
 *  @see MVAPair class
 *  @since version 1.0
 */
-(MVAPair *)firstObject;

/**
 *  Function that removes the first object
 *
 *  @since version 1.0
 */
-(void)removeFirst;

@end