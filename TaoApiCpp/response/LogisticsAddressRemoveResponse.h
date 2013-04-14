#ifndef LOGISTICSADDRESSREMOVERESPONSE_H
#define LOGISTICSADDRESSREMOVERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/AddressResult.h>


/**
 * @brief TOP RESPONSE API: 用此接口删除卖家地址库
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsAddressRemoveResponse : public TaoResponse
{
public:
 virtual ~LogisticsAddressRemoveResponse() { }

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
