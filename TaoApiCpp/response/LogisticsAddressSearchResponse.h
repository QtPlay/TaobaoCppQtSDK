#ifndef LOGISTICSADDRESSSEARCHRESPONSE_H
#define LOGISTICSADDRESSSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/AddressResult.h>


/**
 * @brief TOP RESPONSE API: 通过此接口查询卖家地址库，
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsAddressSearchResponse : public TaoResponse
{
public:
 virtual ~LogisticsAddressSearchResponse() { }

  QList<AddressResult> getAddresses() const;
  void setAddresses (QList<AddressResult> addresses);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 一组地址库数据，
 **/
  QList<AddressResult> addresses;

};

#endif
