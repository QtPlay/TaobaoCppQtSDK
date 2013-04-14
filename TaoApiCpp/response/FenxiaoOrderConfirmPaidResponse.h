#ifndef FENXIAOORDERCONFIRMPAIDRESPONSE_H
#define FENXIAOORDERCONFIRMPAIDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 供应商确认收款（非支付宝交易）。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderConfirmPaidResponse : public TaoResponse
{
public:
 virtual ~FenxiaoOrderConfirmPaidResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 确认结果成功与否
 **/
  bool isSuccess;

};

#endif
