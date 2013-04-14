#ifndef SCITEMGETRESPONSE_H
#define SCITEMGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ScItem.h>


/**
 * @brief TOP RESPONSE API: 根据id查询商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemGetResponse : public TaoResponse
{
public:
 virtual ~ScitemGetResponse() { }

  ScItem getScItem() const;
  void setScItem (ScItem scItem);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 后端商品
 **/
  ScItem scItem;

};

#endif
