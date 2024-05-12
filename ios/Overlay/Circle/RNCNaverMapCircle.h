//
//  RNCNaverMapCircle.h
//  mj-studio-react-native-naver-map
//
//  Created by mj on 4/6/24.
//

#import "ColorUtil.h"
#import "FnUtil.h"
#import "MacroUtil.h"
#import "Utils.h"
#import <Foundation/Foundation.h>
#import <NMapsMap/NMapsMap.h>
#import <React/RCTImageLoader.h>
#import <React/RCTUtils.h>
#import <React/RCTView.h>
#import <UIKit/UIKit.h>

#import "RCTFabricComponentsPlugins.h"
#import <React/RCTViewComponentView.h>
#import <react/renderer/components/RNCNaverMapSpec/ComponentDescriptors.h>
#import <react/renderer/components/RNCNaverMapSpec/EventEmitters.h>
#import <react/renderer/components/RNCNaverMapSpec/Props.h>
#import <react/renderer/components/RNCNaverMapSpec/RCTComponentViewHelpers.h>
@interface RNCNaverMapCircle : RCTViewComponentView
@property(nonatomic, strong) NMFCircleOverlay* inner;
@end
