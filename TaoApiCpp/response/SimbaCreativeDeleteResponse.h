#ifndef SIMBACREATIVEDELETERESPONSE_H
#define SIMBACREATIVEDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Creative.h>


/**
 * @brief TOP RESPONSE API: 删除一个创意
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativeDeleteResponse : public TaoResponse
{
public:
 virtual ~SimbaCreativeDeleteResponse() { }

  Creative getCreative() const;
  void setCreative (Creative creative);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 被删除的创意对象
 **/
  Creative creative;

};

#endif
