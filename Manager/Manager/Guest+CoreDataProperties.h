//
//  Guest+CoreDataProperties.h
//  Manager
//
//  Created by Erin Roby on 7/18/16.
//  Copyright © 2016 Erin Roby. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Guest.h"

NS_ASSUME_NONNULL_BEGIN

@interface Guest (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *firstName;
@property (nullable, nonatomic, retain) NSString *lastName;
@property (nullable, nonatomic, retain) NSString *email;
@property (nullable, nonatomic, retain) Reservation *reservation;

@end

NS_ASSUME_NONNULL_END
