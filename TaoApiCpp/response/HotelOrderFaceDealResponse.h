#ifndef HOTELORDERFACEDEALRESPONSE_H
#define HOTELORDERFACEDEALRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 该接口用于卖家确认到店支付订单或者取消订单。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrderFaceDealResponse : public TaoResponse
{
public:
 virtual ~HotelOrderFaceDealResponse() { }

  QString getResult() const;
  void setResult (QString result);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 处理结果
 **/
  QString result;

};

#endif
