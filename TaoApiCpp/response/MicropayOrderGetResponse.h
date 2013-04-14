#ifndef MICROPAYORDERGETRESPONSE_H
#define MICROPAYORDERGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/MicroPayOrderDetail.h>


/**
 * @brief TOP RESPONSE API: 用户对已经冻结的订单可以调用此接口查询明细
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicropayOrderGetResponse : public TaoResponse
{
public:
 virtual ~MicropayOrderGetResponse() { }

  MicroPayOrderDetail getMicroPayOrderDetail() const;
  void setMicroPayOrderDetail (MicroPayOrderDetail microPayOrderDetail);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 冻结订单详情
 **/
  MicroPayOrderDetail microPayOrderDetail;

};

#endif
