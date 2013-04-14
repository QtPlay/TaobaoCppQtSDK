#ifndef UDPJUHUASUANGETRESPONSE_H
#define UDPJUHUASUANGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/TargetSearchTopResult.h>


/**
 * @brief TOP RESPONSE API: 聚划算指标查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UdpJuhuasuanGetResponse : public TaoResponse
{
public:
 virtual ~UdpJuhuasuanGetResponse() { }

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
