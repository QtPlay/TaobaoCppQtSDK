#ifndef MICROPAYORDERUNFREEZERESPONSE_H
#define MICROPAYORDERUNFREEZERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/UnfreezeOrderDetail.h>


/**
 * @brief TOP RESPONSE API: 解冻冻结单API
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicropayOrderUnfreezeResponse : public TaoResponse
{
public:
 virtual ~MicropayOrderUnfreezeResponse() { }

  UnfreezeOrderDetail getUnfreezeOrderDetail() const;
  void setUnfreezeOrderDetail (UnfreezeOrderDetail unfreezeOrderDetail);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 冻结订单详情结果
 **/
  UnfreezeOrderDetail unfreezeOrderDetail;

};

#endif
