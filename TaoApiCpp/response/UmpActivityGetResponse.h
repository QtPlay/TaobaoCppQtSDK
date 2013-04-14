#ifndef UMPACTIVITYGETRESPONSE_H
#define UMPACTIVITYGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 查询营销活动
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivityGetResponse : public TaoResponse
{
public:
 virtual ~UmpActivityGetResponse() { }

  QString getContent() const;
  void setContent (QString content);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 营销活动的内容，可以通过ump sdk中的marketingTool来完成对该内容的处理
 **/
  QString content;

};

#endif
