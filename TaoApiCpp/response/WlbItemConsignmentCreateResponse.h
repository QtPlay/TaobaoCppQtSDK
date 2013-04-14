#ifndef WLBITEMCONSIGNMENTCREATERESPONSE_H
#define WLBITEMCONSIGNMENTCREATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 代销商创建商品代销关系：货主创建授权规则，获得授权规则后方可创建商品代销关系。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemConsignmentCreateResponse : public TaoResponse
{
public:
 virtual ~WlbItemConsignmentCreateResponse() { }

  qlonglong getConsignmentId() const;
  void setConsignmentId (qlonglong consignmentId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 代销关系唯一标识
 **/
  qlonglong consignmentId;

};

#endif
