//
//  AppDelegate.h
//  moment
//
//  Created by Mayank Jain on 9/21/13.
//  Copyright (c) 2013 Mayank Jain. All rights reserved.
//

#define kParseObjectClassKey    "geoImage"
#define kParseObjectGeoKey      "geo"
#define kParseObjectImageKey    "imageFile"
#define kParseObjectUserKey     "user"
#define kParseObjectCaption     "caption"

#import <UIKit/UIKit.h>
#import "ViewController.h"
#import <MapKit/MapKit.h>
#import "FMDatabase.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) ViewController * vc;
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) FMDatabase *db;

+ (CLLocationManager *)sharedLocationManager;

@end
