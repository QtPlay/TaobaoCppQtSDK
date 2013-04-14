#ifndef LOGISTICSADDRESSMODIFYRESPONSE_H
#define LOGISTICSADDRESSMODIFYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/AddressResult.h>


/**
 * @brief TOP RESPONSE API: 卖家地址库修改
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsAddressModifyResponse : public TaoResponse
{
public:
 virtual ~LogisticsAddressModifyResponse() { }

  AddressResult getAddressResult() const;
  void setAddressResult (AddressResult addressResult);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 只返回修改时间modify_date
 **/
  AddressResult addressResult;

};

#endif
