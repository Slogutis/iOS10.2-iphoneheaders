#import <OpusOrigamiProducer/MREffect.h>
#import <OpusOrigamiProducer/MREffectPList.h>
#import <OpusOrigamiProducer/MURetainingKey.h>
#import <OpusOrigamiProducer/MPAction.h>
#import <OpusOrigamiProducer/MPConditionalAction.h>
#import <OpusOrigamiProducer/MPAnimationTrigger.h>
#import <OpusOrigamiProducer/MPActionTrigger.h>
#import <OpusOrigamiProducer/MPStateOperation.h>
#import <OpusOrigamiProducer/MPGenericAction.h>
#import <OpusOrigamiProducer/MPTransitionAction.h>
#import <OpusOrigamiProducer/MRFrame.h>
#import <OpusOrigamiProducer/MUMathExpressionBase.h>
#import <OpusOrigamiProducer/MCText.h>
#import <OpusOrigamiProducer/MRSnapshotter.h>
#import <OpusOrigamiProducer/MRTexture.h>
#import <OpusOrigamiProducer/MRLayer.h>
#import <OpusOrigamiProducer/MRLayerCommand.h>
#import <OpusOrigamiProducer/MRSlideFocusState.h>
#import <OpusOrigamiProducer/MCContainerNavigator.h>
#import <OpusOrigamiProducer/MUBezierCurve.h>
#import <OpusOrigamiProducer/MCPlugSerial.h>
#import <OpusOrigamiProducer/MCAudioPlaylist.h>
#import <OpusOrigamiProducer/MPClusterController.h>
#import <OpusOrigamiProducer/MRGestureRecognizer.h>
#import <OpusOrigamiProducer/MRTapGestureRecognizer.h>
#import <OpusOrigamiProducer/MRPanZoomRotationGestureRecognizer.h>
#import <OpusOrigamiProducer/MRImage.h>
#import <OpusOrigamiProducer/MPLayerInternal.h>
#import <OpusOrigamiProducer/MRTransitionOrigamiFlip.h>
#import <OpusOrigamiProducer/MCMontage.h>
#import <OpusOrigamiProducer/MPLayerGroupInternal.h>
#import <OpusOrigamiProducer/MPLayerGroup.h>
#import <OpusOrigamiProducer/MRRendererInternal.h>
#import <OpusOrigamiProducer/MRRenderer.h>
#import <OpusOrigamiProducer/MRHitZoneForVisualFeedback.h>
#import <OpusOrigamiProducer/MRTransition.h>
#import <OpusOrigamiProducer/MRTransitionCIFilter.h>
#import <OpusOrigamiProducer/MRTransitionPhaseInOut.h>
#import <OpusOrigamiProducer/MREffectJustASlide.h>
#import <OpusOrigamiProducer/MPFaceDetector.h>
#import <OpusOrigamiProducer/MRLayerParallelizer.h>
#import <OpusOrigamiProducer/MRLayerNavigator.h>
#import <OpusOrigamiProducer/MRTransitionChanges.h>
#import <OpusOrigamiProducer/MPFilterManager.h>
#import <OpusOrigamiProducer/MUBezierPath.h>
#import <OpusOrigamiProducer/MCContainerParallelizer.h>
#import <OpusOrigamiProducer/MRImageManager.h>
#import <OpusOrigamiProducer/OpusMarimbaProducerContext.h>
#import <OpusOrigamiProducer/OpusMarimbaProducer.h>
#import <OpusOrigamiProducer/OpusMarimbaProducer_MPAssetKeyDelegate.h>
#import <OpusOrigamiProducer/MPCropController.h>
#import <OpusOrigamiProducer/MCContainerEffect.h>
#import <OpusOrigamiProducer/MPSlide.h>
#import <OpusOrigamiProducer/MRMarimbaView.h>
#import <OpusOrigamiProducer/MRMarimbaLayerView.h>
#import <OpusOrigamiProducer/MRTouch.h>
#import <OpusOrigamiProducer/MRTouchSet.h>
#import <OpusOrigamiProducer/MUPoolObject.h>
#import <OpusOrigamiProducer/MPEffect.h>
#import <OpusOrigamiProducer/MCAnimationKeyframe.h>
#import <OpusOrigamiProducer/MCAnimationKeyframe1D.h>
#import <OpusOrigamiProducer/MCAnimationKeyframeFunction.h>
#import <OpusOrigamiProducer/MCAnimationKeyframe2D.h>
#import <OpusOrigamiProducer/MCAnimationKeyframeVector.h>
#import <OpusOrigamiProducer/MCAnimationPath.h>
#import <OpusOrigamiProducer/MCAnimationPathCombo.h>
#import <OpusOrigamiProducer/MCAnimationPathExpression.h>
#import <OpusOrigamiProducer/MCAnimationPathKeyframed.h>
#import <OpusOrigamiProducer/MCAnimationPathPhysics.h>
#import <OpusOrigamiProducer/MPFileValidationManager.h>
#import <OpusOrigamiProducer/MRCAMLUtilities.h>
#import <OpusOrigamiProducer/MRCAMLBezierData.h>
#import <OpusOrigamiProducer/MRCAMLLayer.h>
#import <OpusOrigamiProducer/MRCAMLTextLayer.h>
#import <OpusOrigamiProducer/MRCAMLAnimation.h>
#import <OpusOrigamiProducer/MRCAMLKeyframe.h>
#import <OpusOrigamiProducer/MRLayerClock.h>
#import <OpusOrigamiProducer/MPSongManager.h>
#import <OpusOrigamiProducer/MUMathExpressionFloatBased.h>
#import <OpusOrigamiProducer/MCAction.h>
#import <OpusOrigamiProducer/MCActionGroup.h>
#import <OpusOrigamiProducer/MCConditionalAction.h>
#import <OpusOrigamiProducer/MCActionForEachPlug.h>
#import <OpusOrigamiProducer/MCTransitionTrigger.h>
#import <OpusOrigamiProducer/MCAnimationTrigger.h>
#import <OpusOrigamiProducer/MCActionTrigger.h>
#import <OpusOrigamiProducer/MCStateOperation.h>
#import <OpusOrigamiProducer/MCStateOperationScalarSet.h>
#import <OpusOrigamiProducer/MCStateOperationStringSet.h>
#import <OpusOrigamiProducer/MCStateOperationExpression.h>
#import <OpusOrigamiProducer/MCMotionTrigger.h>
#import <OpusOrigamiProducer/MCMotionTriggerScalar.h>
#import <OpusOrigamiProducer/MCMotionTriggerExpression.h>
#import <OpusOrigamiProducer/MCGenericAction.h>
#import <OpusOrigamiProducer/MPWeighterConstraint.h>
#import <OpusOrigamiProducer/MPWeighter.h>
#import <OpusOrigamiProducer/MPLayerSerializer.h>
#import <OpusOrigamiProducer/MCAssetVideo.h>
#import <OpusOrigamiProducer/MPFilterInternal.h>
#import <OpusOrigamiProducer/MPFilter.h>
#import <OpusOrigamiProducer/MPTransitionManager.h>
#import <OpusOrigamiProducer/MPFrameManager.h>
#import <OpusOrigamiProducer/MPEffectManager.h>
#import <OpusOrigamiProducer/MRParallelPlugger.h>
#import <OpusOrigamiProducer/MRAnimationPathPhysics.h>
#import <OpusOrigamiProducer/MRAnimationPathScalar.h>
#import <OpusOrigamiProducer/MRAnimationContext.h>
#import <OpusOrigamiProducer/MRUtilities.h>
#import <OpusOrigamiProducer/MRAnimationTrigger.h>
#import <OpusOrigamiProducer/MURandom.h>
#import <OpusOrigamiProducer/MPAuthoringController.h>
#import <OpusOrigamiProducer/MREffectOrigamiTitle.h>
#import <OpusOrigamiProducer/MPAnimationManager.h>
#import <OpusOrigamiProducer/MPAnimationKeyframe.h>
#import <OpusOrigamiProducer/MPAnimationKeyframe1D.h>
#import <OpusOrigamiProducer/MPAnimationKeyframe2D.h>
#import <OpusOrigamiProducer/MPVector.h>
#import <OpusOrigamiProducer/MPAnimationKeyframeVector.h>
#import <OpusOrigamiProducer/MPAnimationKeyframeFunction.h>
#import <OpusOrigamiProducer/MUBezierEdgeIntersection.h>
#import <OpusOrigamiProducer/MPAssetManager.h>
#import <OpusOrigamiProducer/MRShaderManager.h>
#import <OpusOrigamiProducer/MRShader.h>
#import <OpusOrigamiProducer/MRUniform.h>
#import <OpusOrigamiProducer/MPStyleManager.h>
#import <OpusOrigamiProducer/MRPatchworkPatch.h>
#import <OpusOrigamiProducer/MRPatchwork.h>
#import <OpusOrigamiProducer/MROrigamiAnimationPath.h>
#import <OpusOrigamiProducer/MRTextureSource.h>
#import <OpusOrigamiProducer/MCContainer.h>
#import <OpusOrigamiProducer/MPClusterSlide.h>
#import <OpusOrigamiProducer/MCTextConversion.h>
#import <OpusOrigamiProducer/MRTiledSprite.h>
#import <OpusOrigamiProducer/MPDocumentInternal.h>
#import <OpusOrigamiProducer/MPDocumentKeyedUnarchiver.h>
#import <OpusOrigamiProducer/MPDocument.h>
#import <OpusOrigamiProducer/SYNMediaWallCollectionViewCellMainView2.h>
#import <OpusOrigamiProducer/SYNMediaWallCollectionViewCell2.h>
#import <OpusOrigamiProducer/SYNMediaWallCollectionViewCondensedLayout2.h>
#import <OpusOrigamiProducer/MRRenderArguments.h>
#import <OpusOrigamiProducer/MRAction.h>
#import <OpusOrigamiProducer/MRMotion.h>
#import <OpusOrigamiProducer/MRGesturePanZoomRotation.h>
#import <OpusOrigamiProducer/MRMCBlockAction.h>
#import <OpusOrigamiProducer/MCAsset.h>
#import <OpusOrigamiProducer/MREffectManager.h>
#import <OpusOrigamiProducer/MRTransitionManager.h>
#import <OpusOrigamiProducer/MCObjectBase.h>
#import <OpusOrigamiProducer/MCObjectLight.h>
#import <OpusOrigamiProducer/MCObject.h>
#import <OpusOrigamiProducer/MUBezierIntersection.h>
#import <OpusOrigamiProducer/MRMarimbaLayoutManager.h>
#import <OpusOrigamiProducer/MPAuthoringUtilities.h>
#import <OpusOrigamiProducer/MPAnimationPath.h>
#import <OpusOrigamiProducer/MPAnimationPathCombo.h>
#import <OpusOrigamiProducer/MPAnimationPathKeyframed.h>
#import <OpusOrigamiProducer/MRSlideProvider.h>
#import <OpusOrigamiProducer/MPTransition.h>
#import <OpusOrigamiProducer/MUBezierContour.h>
#import <OpusOrigamiProducer/MPTextInternal.h>
#import <OpusOrigamiProducer/MPText.h>
#import <OpusOrigamiProducer/MCSong.h>
#import <OpusOrigamiProducer/MRAssetMaster.h>
#import <OpusOrigamiProducer/MRAssetPlayer.h>
#import <OpusOrigamiProducer/MRAssetPlayerStillImage.h>
#import <OpusOrigamiProducer/MRAssetPlayerMovie.h>
#import <OpusOrigamiProducer/MRAssetPlayerMovieForExport.h>
#import <OpusOrigamiProducer/MRAssetPlayerOptions.h>
#import <OpusOrigamiProducer/MCContainerSerializer.h>
#import <OpusOrigamiProducer/MRAnimationManager.h>
#import <OpusOrigamiProducer/MRGesture.h>
#import <OpusOrigamiProducer/MRHitBlob.h>
#import <OpusOrigamiProducer/MPNavigatorInternal.h>
#import <OpusOrigamiProducer/MPNavigator.h>
#import <OpusOrigamiProducer/MUMathExpressionDoubleBased.h>
#import <OpusOrigamiProducer/MRImageProvider.h>
#import <OpusOrigamiProducer/MREffectOrigami.h>
#import <OpusOrigamiProducer/MREffectOrigamiTiming.h>
#import <OpusOrigamiProducer/MPActionGroup.h>
#import <OpusOrigamiProducer/MRLayerEffect.h>
#import <OpusOrigamiProducer/MRSlideInfo.h>
#import <OpusOrigamiProducer/MRCroppingSprite.h>
#import <OpusOrigamiProducer/MRCroppingSpriteVBO.h>
#import <OpusOrigamiProducer/MRFrameManager.h>
#import <OpusOrigamiProducer/MPLayer.h>
#import <OpusOrigamiProducer/MPPlaylistInternal.h>
#import <OpusOrigamiProducer/MPAudioPlaylist.h>
#import <OpusOrigamiProducer/MRContextState.h>
#import <OpusOrigamiProducer/MRContext.h>
#import <OpusOrigamiProducer/MRContextVertexAttributes.h>
#import <OpusOrigamiProducer/MRShaderArguments.h>
#import <OpusOrigamiProducer/OKWidgetMarimbaView.h>
#import <OpusOrigamiProducer/MPUtilities.h>
#import <OpusOrigamiProducer/MCAssetAudio.h>
#import <OpusOrigamiProducer/MRAudioItem.h>
#import <OpusOrigamiProducer/MPEffectContainer.h>
#import <OpusOrigamiProducer/MRTransitionOrigamiFold.h>
#import <OpusOrigamiProducer/MPLayerEffect.h>
#import <OpusOrigamiProducer/MCPlug.h>
#import <OpusOrigamiProducer/MCPlugSlide.h>
#import <OpusOrigamiProducer/MCPlugProxy.h>
#import <OpusOrigamiProducer/MRMarimbaLayer.h>
#import <OpusOrigamiProducer/MCPlugHaven.h>
#import <OpusOrigamiProducer/MCSlide.h>
#import <OpusOrigamiProducer/MCSlideAsset.h>
#import <OpusOrigamiProducer/MRAudioPlayer.h>
#import <OpusOrigamiProducer/MRAudioDucker.h>
#import <OpusOrigamiProducer/MPCluster.h>
#import <OpusOrigamiProducer/MPFrameInternal.h>
#import <OpusOrigamiProducer/MPFrame.h>
#import <OpusOrigamiProducer/MPEmbeddedAssetManager.h>
#import <OpusOrigamiProducer/MCFilter.h>
#import <OpusOrigamiProducer/MCPlugParallel.h>
#import <OpusOrigamiProducer/MUBezierEdge.h>
#import <OpusOrigamiProducer/MRTransitionAccordion.h>
#import <OpusOrigamiProducer/MRTextRenderer.h>
#import <OpusOrigamiProducer/MPSongInternal.h>
#import <OpusOrigamiProducer/MPSong.h>
