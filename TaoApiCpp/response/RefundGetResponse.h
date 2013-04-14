#ifndef REFUNDGETRESPONSE_H
#define REFUNDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Refund.h>


/**
 * @brief TOP RESPONSE API: 获取单笔退款详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundGetResponse : public TaoResponse
{
public:
 virtual ~RefundGetResponse() { }

  Refund getRefund() const;
  void setRefund (Refund refund);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 搜索到的交易信息列表
 **/
  Refund refund;

};

#endif
