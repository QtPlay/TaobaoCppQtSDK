#ifndef UMPMBBGETBYCODERESPONSE_H
#define UMPMBBGETBYCODERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 根据营销积木块代码获取积木块。接口返回该代码最新版本的积木块。如果要查询某个非最新版本的积木块，可以使用积木块id查询接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpMbbGetbycodeResponse : public TaoResponse
{
public:
 virtual ~UmpMbbGetbycodeResponse() { }

  QString getMbb() const;
  void setMbb (QString mbb);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 营销积木块的内容，通过ump sdk来进行处理
 **/
  QString mbb;

};

#endif
