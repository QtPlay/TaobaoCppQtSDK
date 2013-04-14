#ifndef FENXIAOPRODUCTADDRESPONSE_H
#define FENXIAOPRODUCTADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 添加分销平台产品数据。业务逻辑与分销系统前台页面一致。 
 
    * 产品图片默认为空 
    * 产品发布后默认为下架状态
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductAddResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductAddResponse() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);  qlonglong getPid() const;
  void setPid (qlonglong pid);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 产品创建时间 时间格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 产品ID
 **/
  qlonglong pid;

};

#endif
