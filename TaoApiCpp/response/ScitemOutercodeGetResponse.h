#ifndef SCITEMOUTERCODEGETRESPONSE_H
#define SCITEMOUTERCODEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ScItem.h>


/**
 * @brief TOP RESPONSE API: 根据outerCode查询商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemOutercodeGetResponse : public TaoResponse
{
public:
 virtual ~ScitemOutercodeGetResponse() { }

  ScItem getScItem() const;
  void setScItem (ScItem scItem);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 后台商品
 **/
  ScItem scItem;

};

#endif
