// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: cmongo/cmongoproto/cmongo.proto

#include "mongo/grpc/cmongoproto/cmongo.pb.h"
#include "mongo/grpc/cmongoproto/cmongo.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace cmongoproto {

static const char* Container_method_names[] = {
  "/cmongoproto.Container/HeartBeat",
  "/cmongoproto.Container/CreateContainer",
  "/cmongoproto.Container/DestroyContainer",
  "/cmongoproto.Container/InfoContainer",
  "/cmongoproto.Container/StartContainer",
  "/cmongoproto.Container/StopContainer",
  "/cmongoproto.Container/RSInit",
  "/cmongoproto.Container/RSStatus",
  "/cmongoproto.Container/RSAdd",
  "/cmongoproto.Container/RSRemove",
  "/cmongoproto.Container/CommandContainer",
  "/cmongoproto.Container/ResizeContainer",
  "/cmongoproto.Container/UpgradeContainer",
  "/cmongoproto.Container/UpdateContainerModule",
};

std::unique_ptr< Container::Stub> Container::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< Container::Stub> stub(new Container::Stub(channel));
  return stub;
}

Container::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_HeartBeat_(Container_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateContainer_(Container_method_names[1], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DestroyContainer_(Container_method_names[2], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_InfoContainer_(Container_method_names[3], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StartContainer_(Container_method_names[4], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StopContainer_(Container_method_names[5], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RSInit_(Container_method_names[6], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RSStatus_(Container_method_names[7], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RSAdd_(Container_method_names[8], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RSRemove_(Container_method_names[9], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CommandContainer_(Container_method_names[10], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ResizeContainer_(Container_method_names[11], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpgradeContainer_(Container_method_names[12], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateContainerModule_(Container_method_names[13], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Container::Stub::HeartBeat(::grpc::ClientContext* context, const ::cmongoproto::HeartBeatReq& request, ::cmongoproto::HeartBeatRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_HeartBeat_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::HeartBeatRes>* Container::Stub::AsyncHeartBeatRaw(::grpc::ClientContext* context, const ::cmongoproto::HeartBeatReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::HeartBeatRes>(channel_.get(), cq, rpcmethod_HeartBeat_, context, request);
}

::grpc::Status Container::Stub::CreateContainer(::grpc::ClientContext* context, const ::cmongoproto::CreateContainerReq& request, ::cmongoproto::CreateContainerRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CreateContainer_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::CreateContainerRes>* Container::Stub::AsyncCreateContainerRaw(::grpc::ClientContext* context, const ::cmongoproto::CreateContainerReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::CreateContainerRes>(channel_.get(), cq, rpcmethod_CreateContainer_, context, request);
}

::grpc::Status Container::Stub::DestroyContainer(::grpc::ClientContext* context, const ::cmongoproto::DestroyContainerReq& request, ::cmongoproto::DestroyContainerRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_DestroyContainer_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::DestroyContainerRes>* Container::Stub::AsyncDestroyContainerRaw(::grpc::ClientContext* context, const ::cmongoproto::DestroyContainerReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::DestroyContainerRes>(channel_.get(), cq, rpcmethod_DestroyContainer_, context, request);
}

::grpc::Status Container::Stub::InfoContainer(::grpc::ClientContext* context, const ::cmongoproto::InfoContainerReq& request, ::cmongoproto::InfoContainerRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_InfoContainer_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::InfoContainerRes>* Container::Stub::AsyncInfoContainerRaw(::grpc::ClientContext* context, const ::cmongoproto::InfoContainerReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::InfoContainerRes>(channel_.get(), cq, rpcmethod_InfoContainer_, context, request);
}

::grpc::Status Container::Stub::StartContainer(::grpc::ClientContext* context, const ::cmongoproto::StartContainerReq& request, ::cmongoproto::StartContainerRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_StartContainer_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::StartContainerRes>* Container::Stub::AsyncStartContainerRaw(::grpc::ClientContext* context, const ::cmongoproto::StartContainerReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::StartContainerRes>(channel_.get(), cq, rpcmethod_StartContainer_, context, request);
}

::grpc::Status Container::Stub::StopContainer(::grpc::ClientContext* context, const ::cmongoproto::StopContainerReq& request, ::cmongoproto::StopContainerRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_StopContainer_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::StopContainerRes>* Container::Stub::AsyncStopContainerRaw(::grpc::ClientContext* context, const ::cmongoproto::StopContainerReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::StopContainerRes>(channel_.get(), cq, rpcmethod_StopContainer_, context, request);
}

::grpc::Status Container::Stub::RSInit(::grpc::ClientContext* context, const ::cmongoproto::RSInitReq& request, ::cmongoproto::RSInitRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_RSInit_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::RSInitRes>* Container::Stub::AsyncRSInitRaw(::grpc::ClientContext* context, const ::cmongoproto::RSInitReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::RSInitRes>(channel_.get(), cq, rpcmethod_RSInit_, context, request);
}

::grpc::Status Container::Stub::RSStatus(::grpc::ClientContext* context, const ::cmongoproto::RSStatusReq& request, ::cmongoproto::RSStatusRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_RSStatus_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::RSStatusRes>* Container::Stub::AsyncRSStatusRaw(::grpc::ClientContext* context, const ::cmongoproto::RSStatusReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::RSStatusRes>(channel_.get(), cq, rpcmethod_RSStatus_, context, request);
}

::grpc::Status Container::Stub::RSAdd(::grpc::ClientContext* context, const ::cmongoproto::RSAddReq& request, ::cmongoproto::RSAddRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_RSAdd_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::RSAddRes>* Container::Stub::AsyncRSAddRaw(::grpc::ClientContext* context, const ::cmongoproto::RSAddReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::RSAddRes>(channel_.get(), cq, rpcmethod_RSAdd_, context, request);
}

::grpc::Status Container::Stub::RSRemove(::grpc::ClientContext* context, const ::cmongoproto::RSRemoveReq& request, ::cmongoproto::RSRemoveRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_RSRemove_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::RSRemoveRes>* Container::Stub::AsyncRSRemoveRaw(::grpc::ClientContext* context, const ::cmongoproto::RSRemoveReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::RSRemoveRes>(channel_.get(), cq, rpcmethod_RSRemove_, context, request);
}

::grpc::Status Container::Stub::CommandContainer(::grpc::ClientContext* context, const ::cmongoproto::CommandContainerReq& request, ::cmongoproto::CommandContainerRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_CommandContainer_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::CommandContainerRes>* Container::Stub::AsyncCommandContainerRaw(::grpc::ClientContext* context, const ::cmongoproto::CommandContainerReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::CommandContainerRes>(channel_.get(), cq, rpcmethod_CommandContainer_, context, request);
}

::grpc::Status Container::Stub::ResizeContainer(::grpc::ClientContext* context, const ::cmongoproto::ResizeContainerReq& request, ::cmongoproto::ResizeContainerRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_ResizeContainer_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::ResizeContainerRes>* Container::Stub::AsyncResizeContainerRaw(::grpc::ClientContext* context, const ::cmongoproto::ResizeContainerReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::ResizeContainerRes>(channel_.get(), cq, rpcmethod_ResizeContainer_, context, request);
}

::grpc::Status Container::Stub::UpgradeContainer(::grpc::ClientContext* context, const ::cmongoproto::UpgradeContainerReq& request, ::cmongoproto::UpgradeContainerRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UpgradeContainer_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::UpgradeContainerRes>* Container::Stub::AsyncUpgradeContainerRaw(::grpc::ClientContext* context, const ::cmongoproto::UpgradeContainerReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::UpgradeContainerRes>(channel_.get(), cq, rpcmethod_UpgradeContainer_, context, request);
}

::grpc::Status Container::Stub::UpdateContainerModule(::grpc::ClientContext* context, const ::cmongoproto::UpdateContainerModuleReq& request, ::cmongoproto::UpdateContainerModuleRes* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateContainerModule_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::cmongoproto::UpdateContainerModuleRes>* Container::Stub::AsyncUpdateContainerModuleRaw(::grpc::ClientContext* context, const ::cmongoproto::UpdateContainerModuleReq& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::cmongoproto::UpdateContainerModuleRes>(channel_.get(), cq, rpcmethod_UpdateContainerModule_, context, request);
}

Container::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::HeartBeatReq, ::cmongoproto::HeartBeatRes>(
          std::mem_fn(&Container::Service::HeartBeat), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[1],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::CreateContainerReq, ::cmongoproto::CreateContainerRes>(
          std::mem_fn(&Container::Service::CreateContainer), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[2],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::DestroyContainerReq, ::cmongoproto::DestroyContainerRes>(
          std::mem_fn(&Container::Service::DestroyContainer), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[3],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::InfoContainerReq, ::cmongoproto::InfoContainerRes>(
          std::mem_fn(&Container::Service::InfoContainer), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[4],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::StartContainerReq, ::cmongoproto::StartContainerRes>(
          std::mem_fn(&Container::Service::StartContainer), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[5],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::StopContainerReq, ::cmongoproto::StopContainerRes>(
          std::mem_fn(&Container::Service::StopContainer), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[6],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::RSInitReq, ::cmongoproto::RSInitRes>(
          std::mem_fn(&Container::Service::RSInit), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[7],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::RSStatusReq, ::cmongoproto::RSStatusRes>(
          std::mem_fn(&Container::Service::RSStatus), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[8],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::RSAddReq, ::cmongoproto::RSAddRes>(
          std::mem_fn(&Container::Service::RSAdd), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[9],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::RSRemoveReq, ::cmongoproto::RSRemoveRes>(
          std::mem_fn(&Container::Service::RSRemove), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[10],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::CommandContainerReq, ::cmongoproto::CommandContainerRes>(
          std::mem_fn(&Container::Service::CommandContainer), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[11],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::ResizeContainerReq, ::cmongoproto::ResizeContainerRes>(
          std::mem_fn(&Container::Service::ResizeContainer), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[12],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::UpgradeContainerReq, ::cmongoproto::UpgradeContainerRes>(
          std::mem_fn(&Container::Service::UpgradeContainer), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      Container_method_names[13],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< Container::Service, ::cmongoproto::UpdateContainerModuleReq, ::cmongoproto::UpdateContainerModuleRes>(
          std::mem_fn(&Container::Service::UpdateContainerModule), this)));
}

Container::Service::~Service() {
}

::grpc::Status Container::Service::HeartBeat(::grpc::ServerContext* context, const ::cmongoproto::HeartBeatReq* request, ::cmongoproto::HeartBeatRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::CreateContainer(::grpc::ServerContext* context, const ::cmongoproto::CreateContainerReq* request, ::cmongoproto::CreateContainerRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::DestroyContainer(::grpc::ServerContext* context, const ::cmongoproto::DestroyContainerReq* request, ::cmongoproto::DestroyContainerRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::InfoContainer(::grpc::ServerContext* context, const ::cmongoproto::InfoContainerReq* request, ::cmongoproto::InfoContainerRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::StartContainer(::grpc::ServerContext* context, const ::cmongoproto::StartContainerReq* request, ::cmongoproto::StartContainerRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::StopContainer(::grpc::ServerContext* context, const ::cmongoproto::StopContainerReq* request, ::cmongoproto::StopContainerRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::RSInit(::grpc::ServerContext* context, const ::cmongoproto::RSInitReq* request, ::cmongoproto::RSInitRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::RSStatus(::grpc::ServerContext* context, const ::cmongoproto::RSStatusReq* request, ::cmongoproto::RSStatusRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::RSAdd(::grpc::ServerContext* context, const ::cmongoproto::RSAddReq* request, ::cmongoproto::RSAddRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::RSRemove(::grpc::ServerContext* context, const ::cmongoproto::RSRemoveReq* request, ::cmongoproto::RSRemoveRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::CommandContainer(::grpc::ServerContext* context, const ::cmongoproto::CommandContainerReq* request, ::cmongoproto::CommandContainerRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::ResizeContainer(::grpc::ServerContext* context, const ::cmongoproto::ResizeContainerReq* request, ::cmongoproto::ResizeContainerRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::UpgradeContainer(::grpc::ServerContext* context, const ::cmongoproto::UpgradeContainerReq* request, ::cmongoproto::UpgradeContainerRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Container::Service::UpdateContainerModule(::grpc::ServerContext* context, const ::cmongoproto::UpdateContainerModuleReq* request, ::cmongoproto::UpdateContainerModuleRes* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace cmongoproto
