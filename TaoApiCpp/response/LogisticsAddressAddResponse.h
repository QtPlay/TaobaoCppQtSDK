#ifndef LOGISTICSADDRESSADDRESPONSE_H
#define LOGISTICSADDRESSADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/AddressResult.h>


/**
 * @brief TOP RESPONSE API: 通过此接口新增卖家地址库,卖家最多可添加5条地址库,新增第一条卖家地址，将会自动设为默认地址库
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsAddressAddResponse : public TaoResponse
{
public:
 virtual ~LogisticsAddressAddResponse() { }

  AddressResult getAddressResult() const;
  void setAddressResult (AddressResult addressResult);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 只返回修改日期modify_date
 **/
  AddressResult addressResult;

};

#endif
