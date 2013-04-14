#ifndef UDPITEMGETRESPONSE_H
#define UDPITEMGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/TargetSearchTopResult.h>


/**
 * @brief TOP RESPONSE API: 商品指标查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UdpItemGetResponse : public TaoResponse
{
public:
 virtual ~UdpItemGetResponse() { }

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
