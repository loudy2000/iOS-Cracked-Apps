//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class NSString;

@interface sbCallback : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    // Error parsing type: ^{CameraSource=^^?^^?q{time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >={duration<long long, std::__1::ratio<1, 1000000000> >=q}}{atomic<bool>=AB}{atomic<bool>=AB}B{condition_variable={_opaque_pthread_cond_t=q[40c]}}{thread=^{_opaque_pthread_t}}B{recursive_mutex={_opaque_pthread_mutex_t=q[56c]}}{recursive_mutex={_opaque_pthread_mutex_t=q[56c]}}{list<videocore::IFilter *, std::__1::allocator<videocore::IFilter *> >={__list_node_base<videocore::IFilter *, void *>=^{__list_node_base<videocore::IFilter *, void *>}^{__list_node_base<videocore::IFilter *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<videocore::IFilter *, void *> > >=Q}}i^{Event}^{Looper}QQ^^?{VideoParam=iiiiiBBiBBi}{recursive_mutex={_opaque_pthread_mutex_t=q[56c]}}{tmat4x4<float>=[4{tvec4<float>=(?={?=ffff}{?=ffff}{?=ffff})}]}{?=fffffff}{?=fffffff}^v^v^v^viBBBBBB{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}@?qii}, name: m_source
}

- (void)orientationChanged:(id)arg1;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
-     // Error parsing type: v24@0:8^{CameraSource=^^?^^?q{time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >={duration<long long, std::__1::ratio<1, 1000000000> >=q}}{atomic<bool>=AB}{atomic<bool>=AB}B{condition_variable={_opaque_pthread_cond_t=q[40c]}}{thread=^{_opaque_pthread_t}}B{recursive_mutex={_opaque_pthread_mutex_t=q[56c]}}{recursive_mutex={_opaque_pthread_mutex_t=q[56c]}}{list<videocore::IFilter *, std::__1::allocator<videocore::IFilter *> >={__list_node_base<videocore::IFilter *, void *>=^{__list_node_base<videocore::IFilter *, void *>}^{__list_node_base<videocore::IFilter *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<videocore::IFilter *, void *> > >=Q}}i^{Event}^{Looper}QQ^^?{VideoParam=iiiiiBBiBBi}{recursive_mutex={_opaque_pthread_mutex_t=q[56c]}}{tmat4x4<float>=[4{tvec4<float>=(?={?=ffff}{?=ffff}{?=ffff})}]}{?=fffffff}{?=fffffff}^v^v^v^viBBBBBB{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}@?qii}16, name: setSource:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

