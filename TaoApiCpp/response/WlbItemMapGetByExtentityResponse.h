#ifndef WLBITEMMAPGETBYEXTENTITYRESPONSE_H
#define WLBITEMMAPGETBYEXTENTITYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 根据外部实体类型和实体id查询映射的物流宝商品id
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemMapGetByExtentityResponse : public TaoResponse
{
public:
 virtual ~WlbItemMapGetByExtentityResponse() { }

  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 物流宝商品id
 **/
  qlonglong itemId;

};

#endif
