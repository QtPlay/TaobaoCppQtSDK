#ifndef TRADEMEMOUPDATERESPONSE_H
#define TRADEMEMOUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Trade.h>


/**
 * @brief TOP RESPONSE API: 需要商家或以上权限才可调用此接口，可重复调用本接口更新交易备注，本接口同时具有添加备注的功能
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeMemoUpdateResponse : public TaoResponse
{
public:
 virtual ~TradeMemoUpdateResponse() { }

  Trade getTrade() const;
  void setTrade (Trade trade);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 更新交易的备注信息后返回的Trade，其中可用字段为tid和modified
 **/
  Trade trade;

};

#endif
