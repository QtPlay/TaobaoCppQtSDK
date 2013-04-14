#ifndef CAIPIAOLOTTERYSENDRESPONSE_H
#define CAIPIAOLOTTERYSENDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 卖家给买家送彩票，可以指定彩种和注数。赠送成功，返回true; 以下几种情况情况， 返回false: 注数超过100注、卖家未签署支付宝代扣协议、卖家或者买家信息不存在等。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoLotterySendResponse : public TaoResponse
{
public:
 virtual ~CaipiaoLotterySendResponse() { }

  bool getSendResult() const;
  void setSendResult (bool sendResult);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 赠送是否成功，成功为true, 否则为false
 **/
  bool sendResult;

};

#endif
