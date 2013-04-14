#ifndef UDPSHOPGETRESPONSE_H
#define UDPSHOPGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/TargetSearchTopResult.h>


/**
 * @brief TOP RESPONSE API: 店铺指标查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UdpShopGetResponse : public TaoResponse
{
public:
 virtual ~UdpShopGetResponse() { }

  TargetSearchTopResult getContent() const;
  void setContent (TargetSearchTopResult content);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 指标查询返回结果
 **/
  TargetSearchTopResult content;

};

#endif
