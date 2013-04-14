#ifndef SCITEMMAPDELETERESPONSE_H
#define SCITEMMAPDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 根据后端商品Id，失效指定用户的商品与后端商品的映射关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemMapDeleteResponse : public TaoResponse
{
public:
 virtual ~ScitemMapDeleteResponse() { }

  qlonglong getModule() const;
  void setModule (qlonglong module);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 失效条数
 **/
  qlonglong module;

};

#endif
