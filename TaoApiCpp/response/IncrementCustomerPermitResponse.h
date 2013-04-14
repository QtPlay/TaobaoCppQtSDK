#ifndef INCREMENTCUSTOMERPERMITRESPONSE_H
#define INCREMENTCUSTOMERPERMITRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/AppCustomer.h>


/**
 * @brief TOP RESPONSE API: 提供app为自己的用户开通增量消息服务功能
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementCustomerPermitResponse : public TaoResponse
{
public:
 virtual ~IncrementCustomerPermitResponse() { }

  AppCustomer getAppCustomer() const;
  void setAppCustomer (AppCustomer appCustomer);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 当订阅成功后，返回的订阅情况。具体内容见AppCustomer数据结构。
 **/
  AppCustomer appCustomer;

};

#endif
