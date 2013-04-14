#ifndef REFUNDMESSAGEADDRESPONSE_H
#define REFUNDMESSAGEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/RefundMessage.h>


/**
 * @brief TOP RESPONSE API: 创建退款留言/凭证
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundMessageAddResponse : public TaoResponse
{
public:
 virtual ~RefundMessageAddResponse() { }

  RefundMessage getRefundMessage() const;
  void setRefundMessage (RefundMessage refundMessage);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 退款信息。包含id和created
 **/
  RefundMessage refundMessage;

};

#endif
