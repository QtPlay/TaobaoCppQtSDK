#ifndef WLBITEMCOMBINATIONCREATERESPONSE_H
#define WLBITEMCOMBINATIONCREATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 创建商品组合关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemCombinationCreateResponse : public TaoResponse
{
public:
 virtual ~WlbItemCombinationCreateResponse() { }

  QDateTime getGmtCreate() const;
  void setGmtCreate (QDateTime gmtCreate);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 组合关系创建时间
 **/
  QDateTime gmtCreate;

};

#endif
