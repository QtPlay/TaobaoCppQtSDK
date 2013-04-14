#ifndef HOTELORDERFACECHECKRESPONSE_H
#define HOTELORDERFACECHECKRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 此接口用户到店支付（前台面付）卖家处理订单的入住情况，包括核实买家已入住和核实买家未入住
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrderFaceCheckResponse : public TaoResponse
{
public:
 virtual ~HotelOrderFaceCheckResponse() { }

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
