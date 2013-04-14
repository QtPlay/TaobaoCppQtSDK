#ifndef SCITEMADDRESPONSE_H
#define SCITEMADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ScItem.h>


/**
 * @brief TOP RESPONSE API: 发布后端商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemAddResponse : public TaoResponse
{
public:
 virtual ~ScitemAddResponse() { }

  ScItem getScItem() const;
  void setScItem (ScItem scItem);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 后台商品信息
 **/
  ScItem scItem;

};

#endif
