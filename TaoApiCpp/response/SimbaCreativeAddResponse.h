#ifndef SIMBACREATIVEADDRESPONSE_H
#define SIMBACREATIVEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Creative.h>


/**
 * @brief TOP RESPONSE API: 创建一个创意
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativeAddResponse : public TaoResponse
{
public:
 virtual ~SimbaCreativeAddResponse() { }

  Creative getCreative() const;
  void setCreative (Creative creative);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 新增加的创意对象
 **/
  Creative creative;

};

#endif
