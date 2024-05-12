//
//  RNCNaverMapClusterKey.h
//  DoubleConversion
//
//  Created by mj on 4/18/24.
//

#import <Foundation/Foundation.h>
#import <NMapsGeometry/NMapsGeometry.h>
#import <NMapsMap/NMapsMap.h>
#import <React/RCTBridge.h>
#import <react/renderer/components/RNCNaverMapSpec/Props.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNCNaverMapClusterKey : NSObject <NMCClusteringKey>

@property(nonatomic, strong) NSString* identifier;
@property(nonatomic, strong) NMGLatLng* position;
@property(nonatomic, weak) RCTBridge* bridge;
@property(nonatomic, assign)
    facebook::react::RNCNaverMapViewClustersClustersMarkersImageStruct image;
@property(nonatomic, assign) double width;
@property(nonatomic, assign) double height;

+ (instancetype)
    markerKeyWithIdentifier:(nonnull NSString*)identifier
                   position:(nonnull NMGLatLng*)position
                     bridge:(RCTBridge*)bridge
                      image:
                          (facebook::react::RNCNaverMapViewClustersClustersMarkersImageStruct)image
                      width:(double)width
                     height:(double)height;

@end

NS_ASSUME_NONNULL_END
