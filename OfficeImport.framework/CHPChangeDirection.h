/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHPChangeDirection : EDProcessor  {
}


- (void)changeChartDirection:(id)arg1 sheet:(id)arg2;
- (id)getSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2;
- (void)cleanUpOldSeriesCollection:(id)arg1;
- (id)getGraphicPropertiesForSeriesWithIndex:(int)arg1 fromCollection:(id)arg2 isVaryColors:(bool)arg3 forChart:(id)arg4;
- (id)createNewSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2;
- (void)mapSeriesCollection:(id)arg1 from:(id)arg2 forChart:(id)arg3;
- (void)addDataValue:(id)arg1 to:(id)arg2 withIndex:(int)arg3;
- (void)mapSeriesValues:(id)arg1 to:(id)arg2 forIndex:(unsigned int)arg3 byRow:(bool)arg4 forChart:(id)arg5;
- (bool)isObjectSupported:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;

@end
